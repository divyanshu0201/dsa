class Solution{
  public:
  
    Node* merge(Node* h1,Node *h2){
        Node *res=NULL;
        Node *fin=NULL;
        while(h1!=NULL && h2!=NULL){
            if(h1->data<h2->data){
                Node *temp=new Node(h1->data);
                temp->next=NULL;
                if(res==NULL){
                    res=temp;
                    fin=temp;
                }
                else{
                    res->next=temp;
                    res=temp;
                }
                h1=h1->next;
            }
            else{
                Node *temp=new Node(h2->data);
                temp->next=NULL;
                if(res==NULL){
                    res=temp;
                    fin=temp;
                }
                else{
                    res->next=temp;
                    res=temp;
                }
                h2=h2->next;
            }
        }
        while(h1!=NULL){
                Node *temp=new Node(h1->data);
                temp->next=NULL;
                if(res==NULL){
                    res=temp;
                    fin=temp;
                }
                else{
                    res->next=temp;
                    res=temp;
                }
                h1=h1->next;
        }
        while(h2!=NULL){
                Node *temp=new Node(h2->data);
                temp->next=NULL;
                if(res==NULL){
                    res=temp;
                    fin=temp;
                }
                else{
                    res->next=temp;
                    res=temp;
                }
                h2=h2->next;
        }
        return fin;
    }
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        int l=0;
        Node *temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        if(l==1 || l==0){
            return head;
        }
        int mid = (l+1)/2;
        Node *t1;
        Node *t2;
        t2=head;
        t1=head;
        Node *temp1=head;
        for(int i=0;i<mid;i++){
            t2=t2->next;
        }
        for(int i=0;i<mid-1;i++){
            temp1=temp1->next;
        }
        temp1->next=NULL;
        Node *head1=mergeSort(t1);
        Node *head2=mergeSort(t2);
        Node *res=merge(head1,head2);
        return res;
    }
};
