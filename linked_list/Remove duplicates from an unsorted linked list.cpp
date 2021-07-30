class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_set<int> m;
     Node *prev,*curr;
     prev=head;
     curr=head->next;
     m.insert(prev->data);
     while(curr!=NULL){
         if(m.find(curr->data)==m.end()){
             m.insert(curr->data);
             prev=prev->next;
             curr=curr->next;
         }
         else{
             prev->next=curr->next;
             curr=prev->next;
         }
     
     }
     return head;
    }
};
