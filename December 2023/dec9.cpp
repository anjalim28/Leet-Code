class Solution
{
public:
    void answer(TreeNode *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            answer(root->left, ans);
            ans.push_back(root->val);
            answer(root->right, ans);
        }
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        answer(root, ans);
        return ans;
    }
};