class Solution:
    def defangIPaddr(self, address: str) -> str:
        a=""
        for i in address:
            if (i!='.'):
                a+=i
            else:
                a+="[.]"
        return a
