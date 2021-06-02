class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string final1="";
        if(n==1){
            return strs[0];
        }
        if(strs[0]==""){
            return final1;
        }
        int k1=strs[0].length();
        int k2=strs[1].length();
        int i=0;
        int j1=0,j2=0;
        while(j1<k1 &&j2<k2){
            if(strs[0][j1]!=strs[1][j2]){
                break;
            }
            j1++;
            j2++;
        }
        final1=strs[0].substr(0,j1);
        if(final1==""){
            return final1;
        }
        for(i=2;i<n;i++){
            j1=0,
            j2=0;
            if(strs[i]==""){
                return strs[i];
            }
            while(j1<final1.length() && j2<strs[i].length()){
                if(final1[j1]!=strs[i][j2]){
                    break;
                }
                j1++;
                j2++;
            }
            final1=final1.substr(0,j1);
            if(final1==""){
            return final1;
        }
        }
        return final1;
    }
};
