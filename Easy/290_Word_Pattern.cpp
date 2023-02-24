/*
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.


*/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        std::unordered_map <char, std::string> dic;
        std::unordered_set <std::string> dic2;
        istringstream in(s);
        std::string key;
        uint32_t n = pattern.size();

        size_t i = 0;
        while (in >> key) {

            if (i == n) return 0;
            if (dic.find(pattern[i]) == dic.end()) {
                if (dic2.find(key) != dic2.end()) {
                    return 0;
                }
                else {
                    dic[pattern[i]] = key;
                    dic2.insert(key);
                }

            }
            else {
                if (dic[pattern[i]] != key) return 0;
                
            }

            ++i;
            
        }

        if (i < n) return 0;

        return 1;
        
    }
};