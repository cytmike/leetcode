# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        a=1
        b=n
        while (a<b):
            c=(a+b)//2
            if isBadVersion(c):
                b=c
            else:
                a=c+1
        return a
