int getCount(Node *root, int l, int h)
{
  if(root==NULL){
      return 0;
  }
  if(root->data>=l && root->data<=h){
      int sum=0;
      sum+=getCount(root->left,l,h);
      sum+=getCount(root->right,l,h);
      sum++;
      return sum;
  }
  else if(root->data<l){
      int sum=0;
      sum+=getCount(root->right,l,h);
      return sum;
  }
  else if(root->data>h){
      int sum=0;
      sum+=getCount(root->left,l,h);
      return sum;
  }
}
