/*
 * Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.
 * Note: You can only move either down or right at any point in time.
*/

int minPathSum(int** grid, int gridSize, int* gridColSize){

    uint8_t i;
    uint8_t j;

    for (i = 0; i < gridSize; ++i) {
        for (j = 0; j < *gridColSize; ++j) {
            if (i == 0 && j == 0) {
                continue;
            }
            else if (i == 0) {
                grid[i][j] = grid[i][j - 1] + grid[i][j];
            }
            else if (j == 0) {
                grid[i][j] = grid[i - 1][j] + grid[i][j];
            }
            else {
                if (grid[i - 1][j] < grid[i][j - 1]) {
                    grid[i][j] = grid[i - 1][j] + grid[i][j];
                }
                else {
                    grid[i][j] = grid[i][j - 1] + grid[i][j];
                }
            }
        }   
    }

    return grid[gridSize - 1][*gridColSize - 1];

}