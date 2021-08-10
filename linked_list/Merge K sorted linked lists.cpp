class Solution{
  public:
    //Function to merge K sorted linked list.
    
    Node * smerge(Node *a,Node *b){
        if(a==NULL) 
            return b;
        if(b==NULL){
            return a;
        }    
        Node *result;
        if(a->data<b->data){
            result=a;
            result->next=smerge(a->next,b);
        }
        else{
            result=b;
            result->next=smerge(a,b->next);
        }
        return result;
    }
    
    Node * mergeKLists(Node *arr[], int K)
    {
           int i=0;
           int last=K-1;
           int j=last;
           while(last!=0){
               i=0;
               j=last;
               while(i<j){
                   arr[i]=smerge(arr[i],arr[j]);
                   i++;
                   j--;
                   if(i>=j){
                       last=j;
                   }
               }
           }
           return arr[0];
    }
};
