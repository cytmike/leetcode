class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        f=[0] * 26
        for i in s:
            f[ord(i)-ord('a')] += 1
        for i in t:
            f[ord(i)-ord('a')] -= 1
        for i in range(26):
            if (f[i]):
                return chr(i+ord('a'))
        return
