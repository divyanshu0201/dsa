// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int k=arr[0];
        int d=0;
        if(k==0)
        {
            return 0;
        }
        int max=0;
        int i=1,j=1,m=1;
        while(j<n&&i<n)
        {
            i=j;
            while(i<k+m&&i<n)
            {
                if(arr[i]>max)
                {
                    max=arr[i];
                    j=i;
                }
                i++;
            }
            m=j;
            k=max;
            d++;
        }
        return d;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
