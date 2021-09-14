class Solution
{
    public:
    
    int c=0;
    //Reverse inorder travelsal
    void inorder(Node *root,int K,int &ans){
        if(root!=NULL){
            inorder(root->right,K,ans);
            c++;
            if(c==K){
                ans=root->data;
                return;
            }
            inorder(root->left,K,ans);
        }
    }
    
    int kthLargest(Node *root, int K)
    {
        int ans=-1;
        inorder(root,K,ans);
        return ans;
    }
};
