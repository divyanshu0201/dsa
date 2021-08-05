class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *t1,*t2,*temp;
        temp=head;
        int n=0;
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }
        n++;
        if(k==n){
            return head;
        }
        if(k>n){
            k=k%n;
        }
        if(k==0){
            return head;
        }
        t1=head;
        for(int i=0;i<n-k-1;i++){
            t1=t1->next;
        }
        t2=t1->next;
        t1->next=NULL;
        temp->next=head;
        return t2;
    }
};
