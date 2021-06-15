class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
         int i,j;
         i=0;
         j=0;
         int x=0;
         while(i<n&&j<m){
             if(arr1[i]<arr2[j]){
                 x++;
                 if(x==k){
                    return arr1[i];
                }
                i++;
             }
             else{
                 x++;
                 if(x==k){
                    return arr2[j];
                }
                j++;
             }
         }
         while(i<n){
             x++;
             if(x==k){
                return arr1[i];
            }
            i++;
         }
         while(j<m){
             x++;
            if(x==k){
                return arr2[j];
            }
            j++;
         }
    }
};
