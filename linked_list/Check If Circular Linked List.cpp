bool isCircular(struct Node *head){
    struct Node *temp1,*temp2;
    temp1=head;
    temp2=head;
    if(head==NULL){
        return true;
    }
    while(temp2!=NULL){
        temp2=temp2->next;
        if(temp1==temp2){
            return true;
        }
    }
    return false;
}
