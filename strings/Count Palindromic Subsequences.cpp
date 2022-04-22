class Solution{
    public:
    /*You are required to complete below method */
    long long int dp[1001][1001];
    long long int func1(string str,int i, int j){
        if(i>j){
            return 0;
        }
        if(i==j){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(str[i]==str[j]){
            return dp[i][j]=func1(str,i+1,j)+func1(str,i,j-1)+1;
        }
        else{
            return dp[i][j]=func1(str,i+1,j)+func1(str,i,j-1)-func1(str,i+1,j-1);
        }
    }
    long long int  countPS(string str)
    {
        long long int n=str.length();
        memset(dp,-1,sizeof(dp));
        long long int ans=func1(str,0,n-1);
        return ans;
    }
     
};
