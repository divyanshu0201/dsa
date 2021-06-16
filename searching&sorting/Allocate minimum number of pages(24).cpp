class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    bool solve(int arr[],int n,int mid,int m){
        int c=1;
        int i=0;
        int sum=0;
        for(i=0;i<n;i++){
            if(arr[i]>mid){
                return false;
            }
            if(sum+arr[i]>mid){
                c++;
                sum=arr[i];
                if(c>m){
                    return false;
                }
            }
            else{
                sum+=arr[i];
            }
        }
        return true;
    }
    
    int findPages(int arr[], int n, int m) 
    {
        int i,j;
        int low=0;
        int sum=0;
        int ans=-1;
        for(i=0;i<n;i++){
            sum+=arr[i];
        }
        int high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(solve(arr,n,mid,m)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
