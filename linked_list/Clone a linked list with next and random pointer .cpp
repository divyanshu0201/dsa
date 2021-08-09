class Solution
{
    public:
    Node *copyList(Node *head)
    {
        Node *temp,*curr;
        curr=head;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=new Node(curr->data);
            curr->next->next=temp;
            curr=temp;
        }
        curr=head;
        while(curr!=NULL){
            curr->next->arb=curr->arb?curr->arb->next:curr->arb;
            curr=curr->next->next;
        }
        
        Node *original;
        Node *copy;
        original=head;
        copy=head->next;
        temp=copy;
        while(original and copy){
            original->next=original->next->next;
            copy->next=copy->next?copy->next->next:copy->next;
            original=original->next;
            copy=copy->next;
        }
        return temp;
    }

};
