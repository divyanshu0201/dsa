class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans=0;
        int curr=1;
        int prev=0;
        for(int i=1;i<s.length();i++){
            if(s[i-1]!=s[i]){
                ans += min(prev,curr);
                prev=curr;
                curr =1;
            }
            else{
                curr++;
            }
        }
        ans+=min(prev,curr);
        return ans;
    }
};
