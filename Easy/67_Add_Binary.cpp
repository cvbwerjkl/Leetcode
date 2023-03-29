/*
Given two binary strings a and b, return their sum as a binary string.
*/

class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();
        int max = 0;
        string c;
        int temp = 0;
        if (n > m) max = n;
        else max = m;
        for (int i = max; i > 0; --i) {
            if (n > 0) {
                temp = temp + (a[n - 1] % 2);
                //cout << temp;
                --n;
            }
            if (m > 0) {
                temp = temp + (b[m - 1] % 2);
                --m;
            }
            if (temp == 3) {
                c += '1';
                temp = 1;
            }
            else if (temp == 2) {
                c += '0';
                temp = 1;
            }
            else if (temp == 1) {
                c += '1';
                temp = 0;
            }
            else {
                c += '0';
                temp = 0;
            }
        }
        if (temp != 0) c += '1'; 
        reverse(c.begin(), c.end()); 
        return c;   
    }
};