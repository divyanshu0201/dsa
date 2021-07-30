class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }
        ListNode *slow,*fast;
        slow=head;
        fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *l1,*l2,*temp;
        l1=head;
        temp=head;
        while(temp->next!=slow){
            temp=temp->next;
        }
        temp->next=NULL;
        l2=slow;
        ListNode *prev,*next,*curr;
        prev=NULL;
        next=l2->next;
        curr=l2;
        while(next!=NULL){
            curr->next=prev;
            prev=curr;
            curr=next;
            next=curr->next;
        }
        curr->next=prev;
        prev=curr;
        l2=prev;
        while(l2!=NULL){
            temp=l1->next;
            l1->next=l2;
            l1=l2;
            l2=temp;
        }
    }
};
