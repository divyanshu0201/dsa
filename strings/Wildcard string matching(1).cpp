int dp[1001][1001];
class Solution{
    public:
    
    int solve(string w,string p,int i,int j){
        if(i==-1 && j==-1){
            return 1;
        }
        if(j==-1){
            for(int k=i;k>=0;k--){
                if(w[k]!='*'){
                    return 0;
                }
            }
            return 1;
        }
        if(i==-1){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(w[i]==p[j] || w[i]=='?'){
            return dp[i][j]=solve(w,p,i-1,j-1);
        }
        if(w[i]=='*'){
            int op1=solve(w,p,i-1,j);
            int op2=solve(w,p,i,j-1);
            return dp[i][j]= op1 or op2;
        }
        return dp[i][j] = 0;
        
    }
    
    bool match(string wild, string pattern)
    {
        memset(dp,-1,sizeof(dp));
        int n1=wild.length();
        int n2=pattern.length();
        int x=solve(wild,pattern,n1-1,n2-1);
        return x;
    }
};
