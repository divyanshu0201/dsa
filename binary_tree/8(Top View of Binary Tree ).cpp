class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> res;
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        if(root==NULL){
            return res;
        }
        q.push({root,0});
        while(!q.empty()){
            Node* t=q.front().first;
            int h=q.front().second;
            q.pop();
            if(!mp[h]){
                mp[h]=t->data;
            }
            if(t->left){
                q.push({t->left,h-1});
            }
            if(t->right){
                q.push({t->right,h+1});
            }
            
        }
        for(auto x:mp){
            res.push_back(x.second);
        }
        return res;
    }

};
