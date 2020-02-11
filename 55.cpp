class Solution {
public:
    bool canJump(vector<int>& nums) {
        int gg=0;
        for (int i=0;i<nums.size();i++)
        {
            if (gg<i)
                return false;
            if (i+nums[i]>gg)
                gg=i+nums[i];
            if (gg>nums.size())
                return true;
        }
        return true;
    }
};
