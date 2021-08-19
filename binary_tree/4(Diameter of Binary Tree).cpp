int maxheight(struct Node* root,int l){
    if(root==NULL){
        return l;
    }
    else{
        l++;
        int l1=maxheight(root->left,l);
        int l2=maxheight(root->right,l);
        if(l1>l2){
            return l1;
        }
        else{
            return l2;
        }
    }
}
//Function to find the height of a binary tree.
int height(struct Node* node)
{
    if(node==NULL){
        return 0;
    }
    int l=1;
    int l1=maxheight(node->left,l);
        int l2=maxheight(node->right,l);
        if(l1>l2){
            return l1;
        }
        else{
            return l2;
        }
}
