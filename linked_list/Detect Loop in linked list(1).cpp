class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *temp;
        unordered_map<Node*,int> m;
         
        while(head){
            if(!m[head]){
                m[head]=1;
                head=head->next;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
