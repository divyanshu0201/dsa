class Solution {
  public:
    int getMinDiff(int arr[], int n, int k)
{
    int min1=0,max1=0,r=0;
        sort(arr,arr+n);
        r=arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=k)
            {
            max1=max(arr[i-1]+k,arr[n-1]-k);
            min1=min(arr[i]-k,arr[0]+k);
            r=min(r,max1-min1);
            }
        }
        return r;
}
};
