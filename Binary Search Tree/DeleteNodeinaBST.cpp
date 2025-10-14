class Solution {
public:
    TreeNode* lastRightChild(TreeNode* root){
        if(root->right == NULL) return root;
        return lastRightChild(root->right);
    }
    TreeNode* helper(TreeNode* root){
        if(!root->left) return root->right;
        else if(!root->right) return root->left;
        TreeNode* rightChild = root->right;
        TreeNode* lastRight = lastRightChild(root->left);
        lastRight->right = rightChild;
        return root->left; 
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
            if(root==NULL) return root;
            if(root->val==key) return helper(root);
            TreeNode* dummy = root;
            while(root){
                if(root->val > key){
                    if(root->left && root->left->val == key){
                        root->left =  helper(root->left);
                        break;
                    }
                    else root = root->left;
                }
                else{
                    if(root->right && root->right->val == key){
                        root->right =  helper(root->right);
                        break;
                    }
                    else root = root->right;
                }
            }
            return dummy;
    }
    
};
