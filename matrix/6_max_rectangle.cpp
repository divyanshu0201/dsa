int kadanealgo(int heights[],int m)
    {
        int i,j,k,temp;
        int area=INT_MIN;
        int stack[m];
        int top=-1;
        for(i=0;i<m;)
        {
            if(top==-1||heights[i]>=heights[stack[top]])
            {
                stack[++top]=i;
                i++;
            }
            else
            {
                    k=stack[top];
                    top--;
                    if(top==-1)
                    {
                        temp=heights[k]*i;
                    }
                    else
                    {
                        temp=heights[k]*(i-stack[top]-1);
                    }
                    if(temp>area)
                    {
                        area=temp;
                    }
            }
        }
        while(top>-1)
        {
            k=stack[top];
                    top--;
                    if(top==-1)
                    {
                        temp=heights[k]*i;
                    }
                    else
                    {
                        temp=heights[k]*(i-stack[top]-1);
                    }
                    if(temp>area)
                    {
                        area=temp;
                    }
        }
        return area;
    }

class Solution{
  public:

    int maxArea(int M[MAX][MAX], int n, int m) {
       
       int i,j,k,ans=INT_MIN;
       int temp[m]={0};
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if(M[i][j]==0)
               {
                   temp[j]=0;
               }
               else
               {
                   temp[j]+=M[i][j];
               }
           }
           ans=max(ans,kadanealgo(temp,m));
       }
       return ans;
    }
};
