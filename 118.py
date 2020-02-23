class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows==0:
            return []
        c=[]
        a=[1]
        c.append(a)
        for i in range(1,numRows):
            b=[1]
            for j in range(1,i):
                b.append(a[j-1]+a[j])
            b.append(1)
            a=b
            c.append(a)
        return c
