class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        int n1=s1.length();
        int n2=s2.length();
        
        int mat[n1+1][n2+1];
        
        int i,j;
        
        if(n1==0 || n2==0){
            return 0;
        }
        
        for(i=0;i<=n1;i++){
            mat[i][0]=0;
        }
        for(j=0;j<=n2;j++){
            mat[0][j]=0;
        }
        
        for(i=1;i<=n1;i++){
            for(j=1;j<=n2;j++){
                if(s1[i-1]==s2[j-1]){
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else{
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
        return mat[n1][n2];
    }
};
