/*
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
- Those numbers for which this process ends in 1 are happy.

Return true if n is a happy number, and false if not.


*/

#include <iostream>
#include <unordered_set>



bool isHappy(int n) {
    std::unordered_set <int> numbers;

    while (!numbers.contains(n) && n != 1) {
        numbers.insert(n);
        int k = n;
        n = 0;
        while (k != 0) {
            n = n + (k % 10) * (k % 10);
            k /= 10;
            //std::cout << k;
        }


    }

    if (n == 1) return 1;
    else return 0;

}


int main() {
    std::cout << isHappy(19);

    return 0;
}