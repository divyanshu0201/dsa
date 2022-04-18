int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  int temp[n]={0};
  int count=0;
  int j1=0;
  int j2=0;
  int min=INT_MAX;
  while(count<k){
      min=INT_MAX;
      for(int i=0;i<n;i++){
          if(mat[i][temp[i]]<min && temp[i]<n){
              min=mat[i][temp[i]];
              j1=i;
              j2=temp[i];
          }
      }
      temp[j1]++;
      count++;
  }
  return mat[j1][j2];
}
