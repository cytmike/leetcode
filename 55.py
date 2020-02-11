class Solution:
    def canJump(self, nums: List[int]) -> bool:
        gg=0
        n=len(nums)
        for i in range(n):
            if (gg<i):
                return False
            if (i+nums[i]>gg):
                gg=i+nums[i]
            if (gg>=n):
                return True
        return True
