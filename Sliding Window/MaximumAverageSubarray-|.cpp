class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n =nums.size();
        int l =0, r=0;
        int sum =0;
        double maxi = INT_MIN;
        int size =0;
        while(r<n){
            sum+=nums[r];
            size++;
            if(size>k) { 
                sum-=nums[l];
                l++;
                size--;
            }
            if(size==k){
               double average = (double)sum / k;
                maxi = max(maxi,average);
            }
            r++;
        }
        return maxi;
    }
};
