class Solution{
    public:
    int Maximize(int a[],int n)
    {
        sort(a,a+n);
        int mod=1000000007;
        long long int sum=0;
        for(long long int i=0;i<n;i++){
            sum+=(a[i]*i);
        }
        sum=sum%mod;
        return sum;
    }
};
