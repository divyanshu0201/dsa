vector<int> leftView(Node *root)
{
   vector<int> res;
   if(root==NULL){
       return res;
   }
   queue<Node*> q;\
   q.push(root);
   while(!q.empty()){
       int sz=q.size();
       res.push_back(q.front()->data);
       while(sz--){
           Node *t=q.front();
           q.pop();
           if(t->left){
               q.push(t->left);
           }
           if(t->right){
               q.push(t->right);
           }
       }
   }
   return res;
}
