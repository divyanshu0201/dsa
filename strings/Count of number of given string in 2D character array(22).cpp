class Solution {
public:
    
    int solve(int i,int j,string word, vector<vector<char>>& board,int n,int index){
        int found=0;
        if(i>=0&&j>=0&&i<board.size()&&j<board[0].size()&&word[index]==board[i][j]){
            char temp=board[i][j];
            board[i][j]=0;
            index++;
            if(index==n){
                found=1;
            }
            else{
                found += solve(i+1,j,word,board,n,index);
                found += solve(i-1,j,word,board,n,index);
                found += solve(i,j+1,word,board,n,index);
                found += solve(i,j-1,word,board,n,index);
            }
            board[i][j]=temp;
        }
        return found;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int i,j;
        for(i=0;i<board.size();i++){
            for(j=0;j<board[0].size();j++){
                    if(solve(i,j,word,board,word.length(),0)>0){
                        return true;
                }
            }
        }
        return false;
    }
};
