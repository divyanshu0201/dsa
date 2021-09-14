Node* totree(int pre[],int l,int h){
    if(l>h){
        return NULL;
    }
    Node* temp=new Node();
    temp->data=pre[l];
    int i=l;
    for(i=l;i<=h;i++){
        if(pre[i]>pre[l]){
            break;
        }
    }
    temp->left=totree(pre,l+1,i-1);
    temp->right=totree(pre,i,h);
}

Node* constructTree(int pre[], int size)
{
    Node *temp=totree(pre,0,size-1);
    return temp;
}
