/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. 
Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

    I can be placed before V (5) and X (10) to make 4 and 9. 
    X can be placed before L (50) and C (100) to make 40 and 90. 
    C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.
*/

class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int size = s.size();

        for (int j = 0; j < size; ++j) {
            if (s[j] == 'M') total += 1000;
            else if (s[j] == 'D') total += 500;
            else if (s[j] == 'C') {
                if (j == size - 1) total += 100;
                else if (s[j + 1] == 'D' || s[j + 1] == 'M') total -= 100;
                else total += 100;
            }
            else if (s[j] == 'X') {
                if (j == size - 1) total += 10;
                else if (s[j + 1] == 'L' || s[j + 1] == 'C') total -= 10;
                else total += 10;
            }
            else if (s[j] == 'I') {
                if (j == size - 1) total += 1;
                else if (s[j + 1] == 'X' || s[j + 1] == 'V') total -= 1;
                else total += 1;
            }
            else if (s[j] == 'L') total += 50;
            else if (s[j] == 'V') total += 5;

        }

        return total;
    }
};