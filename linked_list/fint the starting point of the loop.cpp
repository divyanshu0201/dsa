/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        int i=0;
        ListNode *temp;
        temp=head;
        unordered_map<ListNode* , int> m;
        while(temp!=NULL){
            if(!m[temp]){
                m[temp]=1;
                temp=temp->next;
            }
            else{
                return temp;
            }
        }
        return NULL;
    }
};
