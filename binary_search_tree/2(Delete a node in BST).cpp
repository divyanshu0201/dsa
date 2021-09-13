class Solution {
public:
    
    TreeNode* findmax(TreeNode* root){
        TreeNode *q=root->right;
     while(q->left!=nullptr){
         q=q->left;
         }
      return q;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }
        if(root->val==key){
            if(root->right==NULL && root->left==NULL){
                return NULL;
            }
            else if(root->left==NULL){
                return root->right;
            }
            else if(root->right==NULL){
                return root->left;
            }
            else{
                TreeNode *temp=findmax(root);
                int temp1=root->val;
                root->val=temp->val;
                temp->val=temp1;
                root->right=deleteNode(root->right,key);
                return root;
            }
        }
        if(key>root->val){
            root->right=deleteNode(root->right,key);
        }
        else{
            root->left=deleteNode(root->left,key);
        }
        return root;
    }
};
