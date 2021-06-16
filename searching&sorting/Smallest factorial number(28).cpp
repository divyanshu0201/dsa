class Solution
{
    public:
    
        bool check(int mid,int n){
            int temp=mid;
            int count=0;
            int f=5;
            while(f<=temp){
                count+=temp/f;
                f=f*5;
            }
            if(count>=n){
                return 1;
            }
            return 0;
        }
    
        int findNum(int n)
        {
            if(n==1){
                return 5;
            }
            
            int low=0;
            int high=5*n;
            while(low<high){
                int mid=(low+high)/2;
                if(check(mid,n)){
                    high=mid;
                }
                else{
                    low=mid+1;
                }
            }
            return low;
        }
};
