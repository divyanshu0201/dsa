class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    int i,j,k;
	    int count=0;
	    sort(arr,arr+n);
	    for(i=0;i<n-2;i++){
	        j=i+1;
	        k=n-1;
	        while(j<k){
	            if(arr[i]+arr[j]+arr[k]>=sum){
	                k--;
	            }
	            else{
	                count+=(k-j);
	                j++;
	            }
	        }
	    }
	    return count;
	}
		 

};
