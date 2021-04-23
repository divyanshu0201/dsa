class Solution{
  public:
    int minJumps(int arr[], int n){
        int i;
        int maxr=arr[0];
        int step=arr[0];
        int jump=1;
        if(n==1)
        {
            return 0;
        }
        else if(arr[0]==0)
        {
            return -1;
        }
        else
        {
            for(i=1;i<n;i++)
            {
                if(i==n-1)
                {
                    return jump;
                }
                maxr=max(maxr,arr[i]+i);
                step--;
                if(step==0)
                {
                    jump++;
                    if(i>=maxr)
                    {
                        return -1;
                    }
                    step=maxr-i;
                }
            }
        }
        return -1;
    }
};
