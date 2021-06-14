class Solution {
  public:
    int countSquares(int N) {
        int i;
        int c=0;
        int mul=1;
        while(mul<N){
            if((i*i)<N){
                mul=i*i;
                c++;
                i++;
            }
            else{
                break;
            }
        }
        if(c==0){
            return 0;
        }
        return c-1;
    }
};
