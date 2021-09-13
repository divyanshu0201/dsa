Node* inpre(Node* root){
    Node *p=root->left;
    while(p->right){
        p=p->right;
    }
    return p;
}

Node* insuc(Node* root){
    Node *p=root->right;
    while(p->left){
        p=p->left;
    }
    return p;
}

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root){
        return NULL:
    }
    if(root->key==key){
        if(root->left) pre=inpre(root);
        if(root->right) suc=insuc(root);
        return;
    }
    if(key>root->key){
        pre=root;
        findPreSuc(root->right,pre,suc,key);
    }
    else{
        suc=root;
        finPreSuc(root->left,pre,suc,key);
    }
}
