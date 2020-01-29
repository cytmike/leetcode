class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int c[1000]={0};
        for (int i:answers)
            c[i]++;
        int r=0;
        for (int i=0;i<1000;i++)
            if (c[i]>0)
            {
                while (c[i]>0)
                {
                    r+=i+1;
                    c[i]=c[i]-i-1;
                }
            }
        return r;
    }
};
