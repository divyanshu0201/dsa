class Solution
{
    int dp[10001];
    
    int include1(int arr[],int i){
        if(i<=-1){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=max(include1(arr,i-1),arr[i]+include1(arr,i-2));
    }
    
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        memset(dp,-1,sizeof(dp));
        return max(include1(arr,n-1),include1(arr,n-2));    
    }
};
