/ { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int left[n];
        int right[n];
        int i;
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(i=1;i<n;i++)
        {
            if(left[i-1]>arr[i])
            {
                left[i]=left[i-1];
            }
            else
            {
                left[i]=arr[i];
            }
        }
        for(i=n-2;i>=0;i--)
        {
            if(right[i+1]>arr[i])
            {
                right[i]=right[i+1];
            }
            else
            {
                right[i]=arr[i];
            }
        }
        int sum=0;
        for(i=0;i<n;i++)
        {
            if(left[i]<right[i])
            {
                sum=sum+left[i]-arr[i];
            }
            else
            {
                sum=sum+right[i]-arr[i];
            }
        }
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
