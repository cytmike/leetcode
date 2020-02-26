class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=-999999,b=-999999,c=-999999,d=-999999;
        for (int i:prices)
        {
            a=max(a,-i);
            b=max(b,i+a);
            c=max(c,-i+b);
            d=max(d,i+c);
        }
        return max(0,d);
    }
};
