class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        int mat[n+1][n+1];
        int i,j;
        for(i=0;i<=n;i++){
            mat[i][0]=0;
        }
        for(j=0;j<=n;j++){
            mat[0][j]=0;
        }
        string s1=s;
        reverse(s1.begin(), s1.end());
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(s[i-1]==s1[j-1]){
                    mat[i][j] = 1+mat[i-1][j-1];
                }
                else{
                    mat[i][j] = max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
        return n-mat[n][n];
    }
};
