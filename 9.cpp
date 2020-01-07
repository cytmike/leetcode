class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
            return false;
        long long r=x;
        long long y=0;
        while (x)
        {
            y=y*10+x%10;
            x/=10;
        }
        return r==y;
    }
};
