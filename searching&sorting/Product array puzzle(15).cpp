class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& arr, int n) {
        int i;
        int k=0;
        long long int mul;
        long long int mul1=1;
        long long int mul2=1;
        vector<long long int> res;
        vector<long long int> res1;
        vector<long long int> res2;
        if(n==1){
            res.push_back(1);
            return res;
        }
        for(i=0;i<n;i++){
            mul1=mul1*arr[i];
            mul2=mul2*arr[n-1-i];
            res1.push_back(mul1);
            res2.push_back(mul2);
        }
        reverse(res2.begin(),res2.end());
        res.push_back(res2[1]);
        for(i=1;i<n-1;i++){
            mul=res1[i-1]*res2[i+1];
            res.push_back(mul);
        }
        res.push_back(res1[n-2]);
        return res;
    }
};
