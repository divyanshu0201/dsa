void removeDuplicates(struct Node* head)
{
    struct Node *prev,*curr;
    prev=head;
    curr=head->next;
    while(curr!=NULL){
        if(prev->data!=curr->data){
            prev=prev->next;
            curr=curr->next;
        }
        else{
            prev->next=curr->next;
            curr=prev->next;
        }
    }
    
}
