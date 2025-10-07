class Solution {
public:
    void traversal(vector<int>& ans, int level, TreeNode* root){
        if(root==NULL) return;
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        traversal(ans,level+1,root->right);
        traversal(ans,level+1,root->left);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        traversal(ans,0,root);
        return ans;
    }
};
