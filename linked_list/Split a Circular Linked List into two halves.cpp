void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *temp,*slow,*fast;
    fast=head;
    slow=head;
    while(fast->next!=head && fast->next->next!=head){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast->next->next==head){
        fast=fast->next;
    }
    *head2_ref=slow->next;
    *head1_ref=head;
    fast->next=slow->next;
     slow->next=head;
}
