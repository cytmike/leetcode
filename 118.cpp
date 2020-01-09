class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vvi;
        vector<int> vi;
        for (int i=0;i<numRows;i++) {
            vector<int> v;
            if (i==0) {
                vi.push_back(1);
                vvi.push_back(vi);
                continue;
            }
            v=vi;
            for (int j=1;j<v.size();j++)
                v[j]=vi[j]+vi[j-1];
            v.push_back(1);
            vi=v;
            vvi.push_back(v);
        }
        return vvi;
    }
};
