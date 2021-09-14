class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    
    vector<Node*> arr;
    vector<int> arr1;
    
    void inorder(Node *root){
        if(root!=NULL){
            inorder(root->left);
            arr.push_back(root);
            arr1.push_back(root->data);
            inorder(root->right);
        }
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        inorder(root);
        sort(arr1.begin(),arr1.end());
        Node *ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==root){
                ans=arr[i];
            }
            arr[i]->data=arr1[i];
        }
        return ans;
    }
};
