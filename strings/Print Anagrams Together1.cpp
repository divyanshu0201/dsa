class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        string temp1;
        vector<string> arr;
        vector<vector<string>> res;
        string temp2;
        for(int i=0;i<string_list.size();i++){
            temp1=string_list[i];
            temp2=temp1;
            int f=0;
            sort(temp1.begin(),temp1.end());
            for(int j=0;j<res.size();j++){
                if(arr[j]==temp1){
                    f=1;
                    res[j].push_back({temp2});
                    break;
                }
            }
            if(f==0){
                arr.push_back(temp1);
                res.push_back({temp2});
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
