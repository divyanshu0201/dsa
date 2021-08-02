class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node* reverse(Node *head){
        Node *curr,*prev,*next;
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
    
    bool isPalindrome(Node *head)
    {
        if(head==NULL || head->next==NULL){
            return true;
        }
        Node *slow,*fast;
        slow=head;
        fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        Node *t1=head;
        Node *t2=slow->next;
        while(t1!=slow->next && t2!=NULL){
            if(t1->data!=t2->data){
                slow->next=reverse(slow->next);
                return false;
            }
            t1=t1->next;
            t2=t2->next;
        }
        slow->next=reverse(slow->next);
        return true;
    }
};
