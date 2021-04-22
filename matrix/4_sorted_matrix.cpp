class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        int sorted[N*N];
        vector<vector<int>> Mat1(N);
        int i,j,k=0;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                sorted[k]=Mat[i][j];
                k++;
            }
        }
        sort(sorted,sorted+(N*N));
        k=0;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                Mat1[i].push_back(sorted[k]);
                k++;
            }
        }
        return Mat1;
        
    }
};
