class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        if (prices.size()==0)
            return p;
        int a=prices[0];
        for (int i=0;i<prices.size();i++)
        {
            if (prices[i]<a)
                a=prices[i];
            else if (prices[i]-a>p)
                p=prices[i]-a;
        }
        return p;
    }
};
