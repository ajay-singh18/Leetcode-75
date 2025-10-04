class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        int n = asteroids.size();
        for(int i =0;i<n;i++){
            if(asteroids[i]>0 ){
                s.push(asteroids[i]);
            }
            else{
                while(!s.empty() && s.top()>0 && s.top()<abs(asteroids[i])  ){
                    s.pop();
                }
                if(!s.empty() && s.top()>0 && s.top()==abs(asteroids[i])){
                    s.pop();
                }
                else if(s.empty() || s.top()<0){
                    s.push(asteroids[i]);
                }
            }
        }
        int size = s.size();
        vector<int> ans(size);
        for(int i = size-1;i>=0;i--){
            ans[i] = s.top();
            s.pop();
        }
        return ans;
    }
};
