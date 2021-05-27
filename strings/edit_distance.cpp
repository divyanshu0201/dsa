class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();
        
        int i,j;
        int temp;
        int t[n1+1][n2+1];
        
        for(j=0;j<=n2;j++){
           t[0][j]=j;
        }
        
        for(i=0;i<=n1;i++){
           t[i][0]=i;
        } 
        
        for(i=1;i<=n1;i++){
            for(j=1;j<=n2;j++){
                if(word1[i-1]==word2[j-1]){
                    t[i][j]=t[i-1][j-1];
                }
                else{
                    temp=min(t[i-1][j],t[i][j-1]);
                    temp=min(temp,t[i-1][j-1]);
                    t[i][j]=1+temp;
                }
            }
        }
        return t[n1][n2];
    }
};
