class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        int l=nums.size();
        l=l+1;
        for(i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
                if(nums[i]==nums[j])
                {
                    return nums[i];
                }
            }
        }
        return 0;
    }
};
