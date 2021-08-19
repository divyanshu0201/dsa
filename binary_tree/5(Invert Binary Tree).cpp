void mirror(struct Node* node) {
    if(node==NULL){
            return;
        }
        struct Node *temp;
        temp=node->right;
        node->right=node->left;
        node->left=temp;
        mirror(node->left);
        mirror(node->right);
        return node;
}
