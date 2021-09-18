class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        
        sort(candies,candies+N);
        int n1=0;
        int min=0;
        int i=0;
        while(n1<N){
            min+=candies[i];
            i++;
            n1++;
            n1+=K;
        }
        i=N-1;
        int max=0;
        n1=0;
        while(n1<N){
            max+=candies[i];
            i--;
            n1++;
            n1+=K;
        }
        return {min,max};
    }
};
