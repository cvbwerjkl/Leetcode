/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int k = 0;

        for (int i = 0; i < n; ++i) {
            if (haystack[i] == needle[k]) {
                ++k;
                if (k == m) {
                    return i - k + 1;
                }
            }
            else {
                i -= k;
                k = 0;
            }

        }
        return -1;
        
    }
};