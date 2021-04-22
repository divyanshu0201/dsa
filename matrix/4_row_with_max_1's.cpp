class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i,j;
	    int k=-1;
	    int max=INT_MIN;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            if(arr[i][j]==1)
	            {
	                break;
	            }
	        }
	        if(m-j>max&&j!=m)
	        {
	            max=m-j;
	            k=i;
	        }     
	    }
	    return (k);
	}

};
