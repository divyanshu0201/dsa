class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    
    unordered_map<Node*,int> dp;
    int func(Node* root){
        if(root==NULL){
            return 0;
        }
        if(dp[root]){
            return dp[root];
        }
        int inc=root->data;
        if(root->left){
            inc+=func(root->left->left);
            inc+=func(root->left->right);
        }
        if(root->right){
            inc+=func(root->right->left);
            inc+=func(root->right->right);
        }
        int exc=func(root->left)+func(root->right);
        dp[root]=max(inc,exc);
        return dp[root];
    }
    
    int getMaxSum(Node *root) 
    {
        return func(root);
    }
};
