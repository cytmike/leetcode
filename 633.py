class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        for a in range(int(math.sqrt(c))+1):
            b=c-a*a
            b=int(math.sqrt(b))
            if a*a+b*b==c:
                return True
        return False
