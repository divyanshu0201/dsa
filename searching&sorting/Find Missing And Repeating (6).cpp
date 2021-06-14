class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int a1[n+1]={0};
        int i,j;
        int *res;
        res=new int[2];
        for(i=0;i<n;i++){
            a1[arr[i]]++;
        }
        for(i=1;i<=n;i++){
            if(a1[i]==0){
                res[1]=i;
            }
            if(a1[i]==2){
                res[0]=i;
            }
        }
        return res;
    }
};
