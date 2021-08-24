class Solution {
public:

    void leftborder(Node *root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left){
            ans.push_back(root->data);
            leftborder(root->left,ans);
        }
        else if(root->right){
            ans.push_back(root->data);
            leftborder(root->right,ans);
        }
    }
    
    void leaf(Node *root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        leaf(root->left,ans);
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
        }
        leaf(root->right,ans);
    }

    void rightborder(Node *root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->right){
            rightborder(root->right,ans);
            ans.push_back(root->data);
        }
        else if(root->left){
            rightborder(root->left,ans);
            ans.push_back(root->data);
        }
    }

    vector <int> printBoundary(Node *root)
    {
        vector<int> ans;
        ans.push_back(root->data);
        leftborder(root->left,ans);
        leaf(root,ans);
        rightborder(root->right,ans);
        return ans;
    }
};
