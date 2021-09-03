class Solution
{
    public:
    
    int solve(Node* root,int &f){
        if(root==NULL){
            return 0;
        }
        int a=solve(root->left,f);
        int b=solve(root->right,f);
        int x=root->data;
        if(a+b!=x &&root->right!=NULL && root->left!=NULL){
            f=0;
        }
        return a+b+x;
    }
    
    bool isSumTree(Node* root)
    {
         int f=1;
         int a=solve(root,f);
         if(f==0){
             return false;
         }
         return true;
         
    }
};
