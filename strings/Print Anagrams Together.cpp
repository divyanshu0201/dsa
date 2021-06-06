vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    map<string, vector<string>> mp;
    int n=string_list.size();
    for(int i=0;i<n;i++){
        string s=string_list[i];
        sort(s.begin(),s.end());
        mp[s].push_back(string_list[i]);
    }
    
    vector<vector<string>> ans(mp.size());
    int idx=0;
    for(auto x:mp){
        auto v = x.second;
        
        for(int i=0;i<v.size();i++){
            ans[idx].push_back(v[i]);
        }
        idx++;
    }
    return ans;
}
