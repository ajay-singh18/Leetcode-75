class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i =0, j = n-1;
        int maxArea = 0;
        while(i<j){
            if(height[i]<height[j]){
                int area = height[i]* (j-i);
                maxArea = max(maxArea,area);
                i++;
            }
            else{
                int area = height[j]* (j-i);
                maxArea = max(maxArea,area);
                j--;
            }
        }
        return maxArea;
    }
};
