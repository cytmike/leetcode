class Solution:
    def cc(self,a, b):
        while a:
            if (a%10==0):
                return False
            a//=10
        while b:
            if (b%10==0):
                return False
            b//=10
        return True
    
    def getNoZeroIntegers(self, n: int) -> List[int]:
        a=[]
        for i in range(1,n):
            if (self.cc(i,n-i)):
                a=[i,n-i]
                break
        return a
