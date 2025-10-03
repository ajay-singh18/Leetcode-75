class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());
        vector<int> a , b;
        for(int i : set1){
            if(set2.count(i)==0) a.push_back(i);
        }
        for(int j : set2){
            if(set1.count(j)==0) b.push_back(j);
        }
        return {a,b};
    }
};
