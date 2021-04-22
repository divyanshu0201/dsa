class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,j;
        int max=0;
        int minprice=INT_MAX;
        for(i=0;i<prices.size();i++)
        {
            if(prices[i]<minprice)
            {
                minprice=prices[i];
            }
            if(prices[i]-minprice>max)
            {
                max=prices[i]-minprice;
            }
        }
        return max;
        
    }
};
