class Solution
{
    public:
    
    Node* reverse(Node* head){
        Node *prev,*curr,*next;
        prev=NULL;
        curr=head;
        next=curr->next;
        while(next!=NULL){
            curr->next=prev;
            prev=curr;
            curr=next;
            next=curr->next;
        }
        curr->next=prev;
        prev=curr;
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
        head = reverse(head);
        Node *curr=head;
        while(curr!=NULL){
            if(curr->next==NULL && curr->data==9){
                curr->data=1;
                Node* temp= new Node(0);
                temp->next=head;
                head=temp;
                curr=curr->next;
            }
            else if(curr->data == 9){
                curr->data=0;
                curr=curr->next;
            }
            else{
                curr->data++;
                break;
            }
            
        }
        head= reverse(head);
        return head;
    }
};
