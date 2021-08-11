int getNthFromLast(struct Node *head, int n)
{
    int k=0;
    struct Node *temp=head;
    while(temp!=NULL){
        k++;
        temp=temp->next;
    }
    if(k<n){
        return -1;
    }
    k=k-n;
    temp=head;
    while(k>0){
        temp=temp->next;
        k--;
    }
    return temp->data;
}
