struct Node* createnewNode1(int key){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=key;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct Node* insert(struct Node *root, int key){
    if(root==NULL){
        return createnewNode1(key);
    }
    if(root->data<key){
        root->right = insert(root->right,key);
    }
    else if(root->data>key){
        root->left = insert(root->left,key);
    }
    return root;
}

void insert_key(struct Node *root, int key) {
    insert(root,key);
}
