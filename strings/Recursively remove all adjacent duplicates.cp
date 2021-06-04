class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        string res="";
        int i=0;
        int k=0;
        while(s[i]){
            if(s[i]!=s[i+1]){
                res+=s[i];
                i++;
            }
            if(s[i+1] && s[i]==s[i+1]){
                while(s[i+1] && s[i]==s[i+1]){
                    i++;
                }
                k++;
            }
        }
        if(k==0){
            return res;
        }
        else{
            return removeConsecutiveCharacter(res);
        }
    }
};
