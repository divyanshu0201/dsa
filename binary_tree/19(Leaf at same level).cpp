class Solution{
  public:
    /*You are required to complete this method*/
    int ma=-1;
    void solve(Node* root,int l,int &f){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            if(ma==-1){
                ma=l;
            }
            else{
                if(ma!=l){
                    f=0;
                }
            }
        }
        else{
        solve(root->left,l+1,f);
        solve(root->right,l+1,f);
        }
    }
    
    bool check(Node *root)
    {
        if(root==NULL){
            return true;
        }
        int f=1;
        solve(root,0,f);
        if(f==1){
            return true;
        }
        return false;
    }
};
