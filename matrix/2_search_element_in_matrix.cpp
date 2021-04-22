class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j;
        int k=matrix[0].size();
        for(i=0;i<matrix.size();i++)
        {
            if(matrix[i][k-1]>=target)
            {
                for(j=0;j<matrix[i].size();j++)
                {
                    if(matrix[i][j]==target)
                        return 1;
                }
            }
        }
        return 0;
    }
};
