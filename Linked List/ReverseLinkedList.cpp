class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head ==NULL || head->next ==NULL) return head;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        
        while(temp!=NULL){
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
};
