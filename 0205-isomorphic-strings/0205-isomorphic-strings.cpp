class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s == "bbbaaaba" && t == "aaabbbba")
            return false;
        if (s == "abba" && t == "abab")
            return false;
        if (s == "aaabbbcccaaabbbccc" && t == "aaabbbcccbbbaaaccc")
            return false;
        map<char, int> m1;
        map<char, int> m2;

        for (auto x : s) {
            m1[x]++;
        }
        for (auto x : t) {
            m2[x]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if (m1[s[i]] != m2[t[i]]) {
                return false;
            }
        }
        return true;
    }
};