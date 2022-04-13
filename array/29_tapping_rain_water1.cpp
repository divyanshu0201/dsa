class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int l=arr[0];
        int r=arr[n-1];
        int temp1[n];
        int temp2[n];
        for(int i=0;i<n;i++){
            if(arr[i]>l){
                l=arr[i];
            }
            temp1[i]=l;
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]>r){
                r=arr[i];
            }
            temp2[i]=r;
        }
        long long c=0;
        for(int i=1;i<n-1;i++){
            int t=min(temp1[i],temp2[i]);
            c=c+t-arr[i];
        }
        return c;
    }
};
