class Solution {
public:
    string defangIPaddr(string address) {
        string z="";
        for (int i=0;i<address.size();i++)
            if (address[i]!='.')
                z+=address[i];
            else
                z+="[.]";
        return z;
    }
};
