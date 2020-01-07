class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        
        #print(''.join(reversed(str(x))))
        #return str(x) == ''.join(reversed(str(x)))
        
        if (x<0):
            return False
        r=x
        y=0
        while (r>0):
            y=y*10+r%10
            r//=10
        return x==y
