// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long a=1,b=n;
        while (a<b)
        {
            long long c=(a+b)/2;
            if (isBadVersion(c))
                b=c;
            else
                a=c+1;
        }
        return a;
    }
};
