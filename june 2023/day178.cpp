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
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans =-1, level = 0, maxi = INT_MIN;
        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            level++;
            int n = q.size();
            int curr_sum = 0;
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();
                curr_sum+=node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }

            }
                if(curr_sum>maxi){
                    ans=level;
                    maxi=curr_sum;
                }
        }
        return ans;
        
    }
};