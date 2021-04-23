class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int i,j;
	    for(i=0;i<n;i++)
	    {
	            if(arr1[i]>arr2[0])
	            {
	                int temp=arr1[i];
	                arr1[i]=arr2[j];
	                arr2[j]=temp;
	                sort(arr2,arr2+m);            
	            }
	    }
	}
};
