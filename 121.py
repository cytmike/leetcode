class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices)==0:
            return 0
        b=prices[0]
        a=0
        for i in prices:
            if i<b:
                b=i
            if i-b>a:
                a=i-b
        return a
