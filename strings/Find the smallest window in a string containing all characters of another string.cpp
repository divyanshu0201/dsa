class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        int n1=s.length();
        int n2=p.length();
        
        int i,j;
        int hash_pat[256] = {0};
        int hash_txt[256] = {0};
        
        for(i=0;i<n2;i++){
            hash_pat[p[i]]++;
        }
        
        int start=0, front=-1,min_len=INT_MAX;
        
        int count=0;
        
        for(j=0;j<n1;j++){
            hash_txt[s[j]]++;
            if(hash_txt[s[j]]<=hash_pat[s[j]]){
                count++;
            }
            if(count==n2){
                while(hash_txt[s[start]]>hash_pat[s[start]] ||
                hash_pat[s[start]]==0)
                {
                    if(hash_txt[s[start]]>hash_pat[s[start]]){
                        hash_txt[s[start]]--;
                    }
                    start++;
                }
                int len=j-start+1;
                if(len<min_len){
                    min_len=len;
                    front=start;
                }
            }
        }
        if(front==-1){
            string temp="-1";
            return temp;
        }
        else{
            string temp=s.substr(front,min_len);
            return temp;
        }
        
    }
};
