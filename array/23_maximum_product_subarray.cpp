// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    if(n==1)
	    {
	        return arr[0];
	    }
	    long long int p[n];
	    int i;
	    long long int minmul=arr[0];
	    long long int maxmul=arr[0];
	    long long int maxproduct=arr[0];
	    for(i=1;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            swap(minmul,maxmul);
	        }
	        
	        if(maxmul*arr[i]>arr[i])
	        {
	            maxmul=maxmul*arr[i];
	        }
	        else
	        {
	            maxmul=arr[i];
	        }
	        
	        if(minmul*arr[i]<arr[i])
	        {
	            minmul=minmul*arr[i];
	        }
	        else
	        {
	            minmul=arr[i];
	        }
	        
	        if(maxmul>maxproduct)
	        {
	            maxproduct=maxmul;
	        }
	    }
	    return maxproduct;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
