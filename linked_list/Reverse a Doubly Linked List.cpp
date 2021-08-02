struct Node* reverseDLL(struct Node * head)
{
    struct Node *temp;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    head=temp;
    struct Node* t;
    while(temp->prev!=NULL){
        t=temp->next;
        temp->next=temp->prev;
        temp->prev=t;
        temp=temp->next;
    }
    t=temp->prev;
    temp->prev=temp->next;
    temp->next=t;
    return head;
    
}
