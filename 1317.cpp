class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> v;
        for (int i=1;i<=n;i++)
            if (cc(i,n-i))
            {
                v.push_back(i);
                v.push_back(n-i);
                break;
            }
        return v;
    }
    bool cc(int a,int b) {
        while (a) {
            if (a%10==0)
                return false;
            a/=10;
        }
        while (b) {
            if (b%10==0)
                return false;
            b/=10;
        }
        return true;
    }
};
