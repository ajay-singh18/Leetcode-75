class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> map;
        for(int i =0;i<n;i++){
            map[arr[i]]++;
        }
        unordered_set<int>s;
        for(auto it: map){
            s.insert(it.second);
        }
        return map.size()==s.size();        
    }
};
