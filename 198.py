class Solution:
    def rob(self, nums: List[int]) -> int:
        a=0
        b=0
        for i in nums:
            a,b=b,max(a+i,b)
        return b
