class Solution
{
    public:
    //Function to add two numbers represented by linked list.
     struct Node* reverse(struct Node* head){
        struct Node *prev,*curr,*next;
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
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        struct Node *result=NULL;
        struct Node *final;
        first=reverse(first);
        second=reverse(second);
        int carry=0;
        int sum;
        while(first!=NULL && second !=NULL){
            sum=first->data+second->data+carry;
            carry=sum/10;
            sum=sum%10;
            struct Node* temp=new Node(sum);
            temp->next=NULL;
            if(result==NULL){
                result=temp;
                final=result;
            }
            else{
                result->next=temp;
                result=temp;
            }
            first=first->next;
            second=second->next;
        }
        while(first!=NULL){
           sum=first->data+carry;
            carry=sum/10;
            sum=sum%10;
            struct Node* temp=new Node(sum);
            temp->next=NULL;
            if(result==NULL){
                result=temp;
                final=result;
            }
            else{
                result->next=temp;
                result=temp;
            } 
            first=first->next;
        }
        while(second!=NULL){
           sum=second->data+carry;
            carry=sum/10;
            sum=sum%10;
            struct Node* temp=new Node(sum);
            temp->next=NULL;
            if(result==NULL){
                result=temp;
                final=result;
            }
            else{
                result->next=temp;
                result=temp;
            } 
            second=second->next;
        }
        if(carry>0){
            struct Node* temp=new Node(carry);
            temp->next=NULL;
            if(result==NULL){
                result=temp;
                final=result;
            }
            else{
                result->next=temp;
                result=temp;
            } 
        }
        final=reverse(final);
        return final;
    }
};
