class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        a=[]
        for i in A:
            a.append(i*i)
        return sorted(a)
