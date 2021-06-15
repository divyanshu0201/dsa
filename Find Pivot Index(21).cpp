class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> res1;
        vector<int> res2;
        int n=nums.size();
        int res=-1;
        int i;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum1+=nums[i];
            sum2+=nums[n-1-i];
            res1.push_back(sum1);
            res2.push_back(sum2);
        }
        reverse(res2.begin(),res2.end());
        if(res2[1]==0){
            return 0;
        }
        for(int i=1;i<n-1;i++){
            if(res1[i-1]==res2[i+1]){
                return i;
            }
        }
        if(res1[n-2]==0){
            return n-1;
        }
        return res;
    }
};
