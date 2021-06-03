class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        int n1=str1.length();
        int n2=str2.length();
        
        if(n1!=n2){
            return false;
        }
        
        int i;
        int m1[256] = {0};
        int m2[256] = {0};
        
        for(i=0;i<n1;i++){
            if(m1[str1[i]]==0 && m2[str2[i]]==0){
                m1[str1[i]]=str2[i];
                m2[str2[i]]=str1[i];
            }
            else if(m1[str1[i]]!=str2[i]){
                return false;
            }
        }
        return true;
    }
};
