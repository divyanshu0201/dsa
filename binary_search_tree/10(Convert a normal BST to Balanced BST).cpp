class Solution {
public:
    
    vector<TreeNode*> arr;
    
    void inorder(TreeNode* root){
        if(root!=NULL){
            inorder(root->left);
            arr.push_back(root);
            inorder(root->right);
        }
    }
    
    TreeNode* tobalance(int l,int h){
        if(l>h){
            return NULL;
        }
        if(l==h){
            arr[l]->left=arr[l]->right=NULL;
            return arr[l];
        }
        int mid=(l+h)/2;
        TreeNode *temp=arr[mid];
        temp->left=tobalance(l,mid-1);
        temp->right=tobalance(mid+1,h);
        return temp;
        
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        inorder(root);
        int n=arr.size();
        TreeNode *ans=tobalance(0,n-1);
        return ans;
    }
};
