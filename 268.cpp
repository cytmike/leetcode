class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        for (int j=0;j<=nums.size();j++)
            i^=j;
        for (int j=0;j<nums.size();j++)
            i^=nums[j];
        return i;
    }
};
