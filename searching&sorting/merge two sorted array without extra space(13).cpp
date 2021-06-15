class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int gap;
	  
	   gap=(n+m+1)/2;
	
	    int i,j;
	    while(gap>0){
	        i=0;
	        j=gap;
	        while(j<n+m){
	            if(i<n&&j<n){
	                if(arr1[i]>arr1[j]){
	                    int temp=arr1[i];
	                    arr1[i]=arr1[j];
	                    arr1[j]=temp;
	                }
	            }     
	           else if(i<n&&j>=n)
	            {
	                    if(arr1[i]>arr2[j-n])
	                    {
	                        int temp=arr1[i];
	                        arr1[i]=arr2[j-n];
	                        arr2[j-n]=temp;
	                    }
	            }
	            else
	            {
	               if(arr2[i-n]>arr2[j-n])
	               {
	                   int temp=arr2[i-n];
	                   arr2[i-n]=arr2[j-n];
	                   arr2[j-n]=temp;
	               }
	            }
	            i++;
	            j++;
	        }
	        if(gap==1)
	       {
	           gap=0;
	       }
	       else
	       {
	           gap=(gap+1)/2;
	       }     
	    }
	}
};
