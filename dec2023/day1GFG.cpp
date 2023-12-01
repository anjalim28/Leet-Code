class Solution{
  private:
    bool helperDeadEndSolver(Node* root, int mini, int maxi)
    {
        if(root == nullptr) return false;
        if(root->left == nullptr && root->right == nullptr){
            return (maxi - mini) == 2;
        }
        bool leftPart = helperDeadEndSolver(root->left, mini, root->data);
        bool rightPart = helperDeadEndSolver(root->right, root->data, maxi);
        return leftPart || rightPart;
    }
  public:
    bool isDeadEnd(Node *root)
    {
        return helperDeadEndSolver(root, 0, 1e9);
    }
};

