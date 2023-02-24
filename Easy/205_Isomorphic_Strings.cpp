/*
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.


*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        std::map<char, char> dic;
        std::map<char, char> dic2;
        size_t n = s.size();
        for (size_t i = 0; i < n; ++i) {
            if (dic.find(s[i]) != dic.end()) {
                if (dic[s[i]] != t[i]) return 0;
            }
            else if (dic2.find(t[i]) != dic2.end()) {
                if (dic2[t[i]] != s[i]) return 0;
            }
            else {
                dic[s[i]] = t[i];
                dic2[t[i]] = s[i];
            }
        
        }

        return 1;

        
    }
};