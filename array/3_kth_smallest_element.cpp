// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

void swap(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int l,int r)
{
    int pivot=arr[l];
    int i=l,j=r+1;
    while(i<j)
    {
        do
        {
            i++;
        }while(arr[i]<=pivot);
        do
        {
            j--;
        }while(arr[j]>pivot);
        if(i<j)
            swap(&arr[i],&arr[j]);
    }
    swap(&arr[l],&arr[j]);
    return j;
}

int quicksort(int arr[],int l,int r,int k)
{
    if(l<r)
    {
        
        int p=partition(arr,l,r);
        if(p==k-1)
        {
            return arr[k-1];
        }
        quicksort(arr,l,p,k);
        quicksort(arr,p+1,r,k);
    }    
    return arr[k-1];

}
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
      return quicksort(arr,l,r,k);
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends
