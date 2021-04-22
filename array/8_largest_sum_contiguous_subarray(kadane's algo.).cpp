// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        int max_current=arr[0];
        int max_global=arr[0];
        int i,temp=0;
        for(i=1;i<n;i++)
        {
            
            temp=max_current+arr[i];
            if(temp>arr[i])
            {
                max_current=temp;
            }
            else
            {
                max_current=arr[i];
            }
            if(max_current>max_global)
            {
                max_global=max_current;
            }
        }
        return max_global;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
