// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int k=0;
        int i=0,j=0;
        int a1[n];
        int b1[m];
        int n1=0;
        int m1=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[i]==a[j])
                    {
                        a[j]=-1;
                    }
                }
            }    
   
        }
        for(i=0;i<m;i++)
        {
            if(b[i]>0)
            {
                for(j=i+1;j<m;j++)
                {
                    if(b[i]==b[j])
                    {
                        b[j]=-1;
                    }
                }
            }    
   
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                a1[n1]=a[i];
                n1++;
            }
        }
        for(i=0;i<m;i++)
        {
            if(b[i]>0)
            {
                b1[m1]=b[i];
                m1++;
            }
        }
        i=0;
        j=0;
        while(i<n1&&j<m1)
        {
            if(a1[i]==b1[j])
            {
                k++;
            }
            else
            {
                k=k+2;
            }
            i++;
            j++;
        }
        while(i<n1)
        {
            k++;
            i++;
        }
        while(j<m1)
        {
            k++;
            j++;
        }
        return k;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
