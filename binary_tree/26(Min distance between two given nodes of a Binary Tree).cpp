class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* lca(Node* root,int a,int b){
        if(root==NULL){
            return NULL;
        }
        if(root->data==a || root->data==b){
            return root;
        }
        Node *l=lca(root->left,a,b);
        Node *r=lca(root->right,a,b);
        if(l && r){
            return root;
        }
        if(l){
            return l;
        }
        else{
            return r;
        }
    }
    
    int solve(Node* root,int k){
        if(root==NULL){
            return 0;
        }
        if(root->data==k){
            return 1;
        }
        int l=solve(root->left,k);
        int r=solve(root->right,k);
        if(l==0 && r==0){
            return 0;
        }
        else
        return l+r+1;
    }
    
    int findDist(Node* root, int a, int b) {
        Node *LCA=lca(root,a,b);
        int a1=solve(LCA,a);
        int b1=solve(LCA,b);
        return a1+b1-2;
    }
};
