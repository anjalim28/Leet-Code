class Solution {
    int d=-1;
    int mn=INT_MAX;
public:
    void df(TreeNode* root){
        if(root==NULL)return;
        df(root->left);
        if(d != -1)
            mn = min(mn, root->val - d);
        d = root->val;
        df(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
         df(root);
        return mn;
    }
};