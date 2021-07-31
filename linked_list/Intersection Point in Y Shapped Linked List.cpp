int intersectPoint(Node* head1, Node* head2)
{
    Node *temp=head1;
    int l1=0,l2=0;
    while(temp!=NULL){
        l1++;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL){
        l2++;
        temp=temp->next;
    }
    if(l1>l2){
        int diff=l1-l2;
        while(diff>0){
            head1=head1->next;
            diff--;
        }
    }
    else{
        int diff=l2-l1;
        while(diff>0){
            head2=head2->next;
            diff--;
        }
    }
    int ans=-1;
    while(head1!=NULL && head2!=NULL){
        if(head1==head2){
            ans=head1->data;
            break;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return ans;
}
