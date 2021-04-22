//User function template for C++

// arr : given array
// l : starting index of the array i.e 0
// r : ending index of the array i.e size-1
// k : find kth smallest element and return using this function
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
 
// Standard partition process of QuickSort(). It considers the last 
// element as pivot and moves all smaller element to left of it and 
// greater elements to right. This function is used by randomPartition() 
int partition(int arr[], int l, int r) 
{ 
    int pivot=arr[l];
    int i=l;
    int j=r+1;
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
 
// Picks a random pivot element between l and r and partitions 
// arr[l..r] around the randomly picked element using partition() 
int randomPartition(int arr[], int l, int r) 
{ 
    int n = r-l+1; 
    int pivot = rand() % n; 
    swap(&arr[l + pivot], &arr[l]); 
    return partition(arr, l, r); 
} 
int kthSmallest(int arr[], int l, int r, int k) 
{ 
    // If k is smaller than number of elements in array 
    if (k > 0 && k <= r - l + 1) 
    { 
        // Partition the array around a random element and 
        // get position of pivot element in sorted array 
        int pos = randomPartition(arr, l, r); 
 
        // If position is same as k 
        if (pos-l == k-1) 
            return arr[pos]; 
        if (pos-l > k-1) // If position is more, recur for left subarray 
            return kthSmallest(arr, l, pos-1, k); 
 
        // Else recur for right subarray 
        return kthSmallest(arr, pos+1, r, k-pos+l-1); 
    } 
 
    // If k is more than the number of elements in the array 
    return INT_MAX; 
} 
