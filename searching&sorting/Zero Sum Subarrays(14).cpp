class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        int i,j;
        int sum=0;
        ll count=0;
        unordered_map<int,int> sums;
        for(i=0;i<n;i++)
        {
            sum +=arr[i];
            if(sum==0)
            {
                count++;
            }
            if(sums.find(sum)!=sums.end()){
                count+= sums[sum];
            }
            sums[sum]++;
        }
        return count;
    }
};
