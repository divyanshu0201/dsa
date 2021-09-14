class Solution {
  public:
    // Return the Kth smallest element in the given BST
    
     int c=0;
    void inorder(Node *root,int K,int &ans){
        if(root!=NULL){
            inorder(root->left,K,ans);
            c++;
            if(c==K){
                ans=root->data;
                return;
            }
            inorder(root->right,K,ans);
        }
    }
    
    int KthSmallestElement(Node *root, int K) {
        int ans=-1;
        inorder(root,K,ans);
        return ans;
    }
};
