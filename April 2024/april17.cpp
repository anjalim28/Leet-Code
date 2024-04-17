class Solution
{
public:
    string smallestFromLeaf(TreeNode *root)
    {
        string smallest;
        dfs(root, "", smallest);
        return smallest;
    }

    void dfs(TreeNode *node, string path, string &smallest)
    {
        if (node == nullptr)
            return;

        path += char('a' + node->val);
        if (node->left == nullptr && node->right == nullptr)
        {
            reverse(path.begin(), path.end());
            if (smallest.empty() || path < smallest)
            {
                smallest = path;
            }
            reverse(path.begin(), path.end()); 
        }

        dfs(node->left, path, smallest);
        dfs(node->right, path, smallest);
    }
};