#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    void dfs(TreeNode* root, string& sb) {
        if (root == nullptr) {
            return;
        }
        if (root->left == nullptr && root->right == nullptr) {
            sb += to_string(root->val) + ",";
            return;
        }
        dfs(root->left, sb);
        dfs(root->right, sb);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string sb1 = "";
        string sb2 = "";
        dfs(root1, sb1);
        dfs(root2, sb2);
        return sb1 == sb2;
    }
};

