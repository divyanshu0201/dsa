vector<int> diagonal(Node *root)
{
   vector<int> res;
   queue<Node*> q;
   q.push(root);
   while(!q.empty()){
       Node *t=q.front();
       q.pop();
       while(t){
           if(t->left){
               q.push(t->left);
           }
           res.push_back(t->data);
           t=t->right;
       }
   }
   return res;
}
