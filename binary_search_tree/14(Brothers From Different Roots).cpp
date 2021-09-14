class Solution
{
public:

     unordered_set<int> mp;

    void inorder(Node *root){
        if(root!=NULL){
            inorder(root->left);
            mp.insert(root->data);
            inorder(root->right);
        }
    }

    int c=0;
    
    void inorder1(Node *root,int x){
        if(root!=NULL){
            inorder1(root->left,x);
            int s=x-root->data;
            if(mp.find(s)!=mp.end()){
                c++;
            }
            inorder1(root->right,x);
        }
    }

    int countPairs(Node* root1, Node* root2, int x)
    {
        inorder(root1);
        inorder1(root2,x);
        return c;
    }
};
