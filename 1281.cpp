class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1,s=0;
        while (n>0)
        {
            int d=n%10;
            n/=10;
            p*=d;
            s+=d;
        }
        return p-s;
    }
};
