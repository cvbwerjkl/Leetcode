/*
There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.

The test cases are generated so that the answer will be less than or equal to 2 * 109.

*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        std::vector <uint32_t> dp(n + 1, 0);
    
        dp[1] = 1;

        
        for (uint16_t i = 1; i <= m; ++i) {
            for (uint16_t j = 1; j <= n; ++j) {
                dp[j] += dp[j - 1];
            }   
        }

        return dp[n];

    }
};