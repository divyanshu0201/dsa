class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int l=0;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        temp=head;
            for(int i=0;i<l/2;i++){
                temp=temp->next;
            }
            return temp;
 
    }
};
