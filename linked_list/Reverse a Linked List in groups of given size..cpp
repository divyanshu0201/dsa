truct node *reverse (struct node *head, int k)
    { 
       struct node *curr,*next,*prev,*start,*end,*temp;
        curr = head;
        prev = NULL;
        int i=0;
        while(curr!=NULL && i<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            i++;
        }
        if(next!=NULL){
            head->next=reverse(next,k);
        }
        return prev;
    }
