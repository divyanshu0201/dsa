void sort012(int a[], int n)
{
    int i=0,j;
    for(j=i;j<n;j++)
    {
        if(a[j]==0)
        {
           a[j]=a[i];
           a[i]=0;
           i++;
        }
    }
    
    for(j=i;j<n;j++)
    {
        if(a[j]==1)
        {
            a[j]=a[i];
            a[i]=1;
            i++;
        }
    }
    for(j=i;j<n;j++)
    {
        if(a[j]==1)
        {
            a[j]=a[i];
            a[i]=2;
            i++;
        }
    }
}
