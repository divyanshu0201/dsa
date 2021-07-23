class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(!head)
            return false;
        Node *low,*high;
        low=head;
        high=head;
        while(high!=NULL && high->next!=NULL){
            low=low->next;
            high=high->next->next;
            if(low==high){
                return true;
            }
        }
        return false;
    }
};
