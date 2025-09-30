class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l =0,r=0;
        int zeros = 0;
        int ans = 0;
        while(r<n){
            if(nums[r]==0) zeros++;
            if(zeros>1){ // can use while also
                if(nums[l]==0) zeros--;
                l++;
            }
            ans = max(ans,r-l);
            r++;
        }
        return ans;
    }
};
