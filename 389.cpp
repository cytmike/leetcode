class Solution {
public:
    char findTheDifference(string s, string t) {
        int f[26]={0};
        for (int i=0;i<s.size();i++)
            f[s[i]-'a']++;
        for (int i=0;i<t.size();i++)
            f[t[i]-'a']--;
        for (int i=0;i<26;i++)
            if (f[i])
                return (char)(i+'a');
        return ' ';
    }
};
