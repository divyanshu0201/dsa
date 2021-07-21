/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode *curr;
        curr= new ListNode;
        ListNode *next;
        next= new ListNode;
        ListNode *prev;
        prev= new ListNode;
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
};
