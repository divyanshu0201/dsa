int minSwap(int *arr, int n, int k) {
    int i,j,l=0;
    int min_len=n;
    int good=0,bad=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            good++;
        }
    }
    for(i=0;i<good;i++)
    {
        if(arr[i]>k)
        {
            bad++;
        }
    }
    i=0;
    j=good-1;
    while(j<n)
    {
        min_len=min(min_len,bad);
        j++;
        if(arr[j]>k)
            bad++;
        if(arr[i]>k)
            bad--;
        i++;    
    }
    return min_len;
}
