class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    int f=1;
    int height(Node* node){
        if(node==NULL){
            return 0;
        }
        int l=height(node->left);
        int r=height(node->right);
        if(abs(l-r)>1){
            f=0;
        }
        return max(l,r)+1;
    }
    
    bool isBalanced(Node *root)
    {
        f=1;
        int l=height(root);
        return f;
    }
};
