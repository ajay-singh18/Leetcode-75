class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int zero =0;
        int l =0,r=0;
        int count =0;
        int maxi = INT_MIN;
        while(r<n){
            if(nums[r]==1) count++;
            else if(nums[r]==0){
                count++;
                zero++;
            }
            while(zero>k){
                if(nums[l]==0) zero--;
                count--;
                l++;
            }
            maxi = max(maxi,count);
            r++;
        }
        return maxi;
    }
};
