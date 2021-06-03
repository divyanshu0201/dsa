class Solution{
    public:
    string findSubString(string str)
    {
        int n=str.length();
        string res;
        int i,j;
        unordered_map <char,int> mp;
        set<char> st;
        for(i=0;i<n;i++){
            st.insert(str[i]);
        }
        int count=st.size();
        int c=0;
        i=0;
        j=1;
        mp[str[i]]++;
        c++;
        int mi=INT_MAX;
        while(i<=j && j<n){
            if(c<count){
                if(mp[str[j]]==0){
                    c++;
                }
                mp[str[j]]++;
                j++;
            }    
            else if(c==count){
                if(j-i<mi){
                    res=str.substr(i,j-i);
                        mi=j-i;
                }
                if(mp[str[i]]==1){
                        c--;
                }
                mp[str[i]]--;
                i++;
            }
        }
        while(count==c){
            if(j-i<mi){
                res=str.substr(i,j-i);
                mi=j-i;
            }
            if(mp[str[i]]==1){
                c--;
            }
            mp[str[i]]--;
            i++;
        }
        return res;
    }
};
