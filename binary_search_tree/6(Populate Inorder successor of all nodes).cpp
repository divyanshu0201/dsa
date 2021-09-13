class Solution
{
public:

    vector<Node*> arr;
    
    void inorder(Node *root){
        if(root!=NULL){
            inorder(root->left);
            arr.push_back(root);
            inorder(root->right);
        }
    }

    void populateNext(Node *root)
    {
        inorder(root);
        int i;
        for(i=0;i<arr.size()-1;i++){
            Node *t=arr[i];
            t->next=arr[i+1];
        }
        Node *t=arr[i];
        t->next=NULL;
    }
};
