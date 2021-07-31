Node* findIntersection(Node* head1, Node* head2)
{
    Node *result=NULL;
    Node *final=NULL;
    while(head1!=NULL&& head2!=NULL){
        if(head1->data==head2->data){
            Node *temp=new Node(head1->data);
            temp->next=NULL;
            if(result==NULL){
                result=temp;
                final=result;
            }
            else{
                result->next=temp;
                result=temp;
            }
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->data<head2->data){
            head1=head1->next;
        }
        else{
            head2=head2->next;
        }
    }
    return final;
}
