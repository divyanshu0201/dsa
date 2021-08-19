class Solution {
  public:
    vector <int> bottomView(Node *root) {
        map<int,int> mp;
        vector<int> res;
        queue<pair<Node*,int>> q;
        if(root==NULL){
            return res;
        }
        q.push({root,0});
        while(!q.empty()){
            Node *t=q.front().first;
            int h=q.front().second;
            q.pop();
            mp[h]=t->data;
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
