class Solution {
public:
    int numberOfSteps (int num) {
        int z=0;
        while (num)
        {
            if (num%2==1)
                num-=1;
            else
                num/=2;
            z++;
        }
        return z;
    }
};
