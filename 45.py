class Solution:
    def jump(self, nums: List[int]) -> int:
        n=len(nums)
        lv=0
        a=0
        b=0
        if n==1:
            return 0
        
        while True:
            lv+=1
            go=0
            for i in range(a,b+1):
                if i+nums[i]>go:
                    go=i+nums[i]
                    if go>=n-1:
                        return lv
            a=b+1
            b=go
            
        return 0
