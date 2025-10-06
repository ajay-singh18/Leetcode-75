class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        if(head ==NULL || head->next ==NULL) return head;
        ListNode* temp = NULL;
        while(head!=NULL){
        ListNode* front = head->next;
        head->next = temp;
        temp = head;
        head = front;
        }
        return temp;

    }
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* start = reverseLL(slow);
        slow = head;
        int sum;
        int maxi = INT_MIN;
        while(start!=NULL){
            sum = (slow->val + start->val);
            maxi = max(maxi,sum);
            start = start->next;
            slow = slow->next;
        }
        return maxi;
    }    
};
