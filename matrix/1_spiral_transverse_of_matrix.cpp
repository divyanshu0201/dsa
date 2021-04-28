class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int lr=0,hr=matrix.size(),lc=0,hc=matrix[0].size();
    vector<int> spiral;
    int i,j;
    while(lr<hr&&lc<hc)
    {
    
            for(j=lc;j<hc;j++)
            {
                spiral.push_back(matrix[lr][j]);
            }
            lr++;
            for(i=lr;i<hr;i++)
            {
                spiral.push_back(matrix[i][hc-1]);
            }
            hc--;
        if(lr<hr)
        {
            for(j=hc-1;j>=lc;j--)
            {
                spiral.push_back(matrix[hr-1][j]);
            }
            hr--;
        }
        if(lc<hc)
        {
            for(i=hr-1;i>=lr;i--)
            {
                spiral.push_back(matrix[i][lc]);
            }
            lc++;
        }
        
    }
    return spiral;
    }
};
