class Solution{
    public:
    /*You are required to complete below method */
    int dp[1001][1001];
    
    int func(int i,int j,string str){
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
            return (dp[i][j] = 1 + func(i+1,j,str) + func(i,j-1,str));
        }
        else{
            return (dp[i][j] = func(i+1,j,str) + func(i,j-1,str) - func(i+1,j-1,str));
        }
    }
    
    long long int  countPS(string str)
    {
       int n=str.length();
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               dp[i][j]=-1;
           }
       }
       return func(0,n-1,str);
    }
     
};
