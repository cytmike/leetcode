class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a=0;
        for (int i=0;i<nums.size();i++)
        {
            int z=0;
            while (nums[i])
            {
                z++;
                nums[i]/=10;
            }
            if (z%2==0)
                a++;
        }
        return a;
    }
};
