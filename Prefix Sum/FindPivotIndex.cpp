class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        int total = nums[0];
        for(int i =1;i<n;i++){
            prefix[i]= prefix[i-1]+ nums[i-1];
            total+=nums[i];
        }
        for(int i =0;i<n;i++){
            int suffix = total-prefix[i] -nums[i];
            if(prefix[i] == suffix) return i;
        }
        return -1;
    }
};
