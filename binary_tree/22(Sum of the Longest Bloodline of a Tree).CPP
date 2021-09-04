class Solution
{
public:


    vector<int> maxheight(Node *root){
        if(root==NULL){
            vector<int> ans;
            ans.push_back(0);
            ans.push_back(0);
            return ans;
        }
        vector<int> left=maxheight(root->left);
        vector<int> right=maxheight(root->right);
        int l=left[0];
        int sum1=left[1];
        int r=right[0];
        int sum2=right[1];
        if(l>r){
            if(root->left!=NULL){
                sum1+=root->left->data;
            }
            vector<int> ans;
            ans.push_back(l+1);
            ans.push_back(sum1);
            return ans;
        }
        else{
            if(root->right!=NULL){
                sum2+=root->right->data;
            }
            vector<int> ans;
            ans.push_back(r+1);
            ans.push_back(sum2);
            return ans;
        }
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        if(root==NULL){
            return 0;
        }
        vector<int> ans=maxheight(root);
        int sum=root->data+ans[1];
        return sum;
    }
};
