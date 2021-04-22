int PalinArray(int a[], int n)
{  
    int temp;
    int ans=0,r;
    int i;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        ans=0;
        while(temp>0)
        {
            r=temp%10;
            temp=temp/10;
            ans=(ans*10)+r;
        }
        if(ans!=a[i])
        {
            return 0;
        }
    }
    return 1;
}
