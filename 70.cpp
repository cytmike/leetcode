class Solution {
public:
    int climbStairs(int n) {
        if (n==1)
            return 1;
        int a=1;
        int b=2;
        for (int i=3;i<=n;i++) {
            int t=b;
            b=a+b;
            a=t;
        }
        return b;
    }
};
