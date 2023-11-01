/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int val = INT_MIN, freq = 0, maxm = 0;
    vector<int> ans;
    void InOrder(TreeNode *Node)
    {
        if (Node == NULL)
            return;
        InOrder(Node->left);
        {
            if (val == Node->val)
            {
                freq++;
            }
            else
            {
                val = Node->val;
                freq = 1;
            }
            if (freq > maxm)
            {
                maxm = freq;
                ans = {Node->val};
            }
            else if (freq == maxm)
            {
                ans.push_back(Node->val);
            }
        }
        InOrder(Node->right);
    }
    vector<int> findMode(TreeNode *root)
    {
        InOrder(root);
        return ans;
    }
};