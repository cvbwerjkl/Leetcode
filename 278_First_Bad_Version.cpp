/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2^x.


*/

class Solution {
public:

    bool isPowerOfTwo(int n) {
        
        if (n > 0 && (n & (n - 1)) == 0) return 1;
        else return 0;
        

    }
};