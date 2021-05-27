class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        int idx=-1;
        for(i=nums.size()-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                idx=i;
                break;
            }
        }
        if(idx==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            int prev=idx;
            for(i=idx+1;i<nums.size();i++)
            {
                if(nums[i]>nums[idx-1]&&nums[i]<=nums[prev])
                {
                    prev=i;
                }
            }
            swap(nums[idx-1],nums[prev]);
            reverse(nums.begin()+idx,nums.end());
        }
    }
};
