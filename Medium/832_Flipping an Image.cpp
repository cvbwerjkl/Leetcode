/*
 * Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
 * To flip an image horizontally means that each row of the image is reversed.
 * For example, flipping [1,1,0] horizontally results in [0,1,1].
 * To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
 * For example, inverting [0,1,1] results in [1,0,0].
*/

class Solution {
public:
    void swap(int* a, int* b) {
        int tmp1;
        int tmp2;

        tmp1 = (*a == 0) ? 1 : 0;
        tmp2 = (*b == 0) ? 1 : 0;
        *a = tmp2;
        *b = tmp1;
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        uint16_t n = image.size();
        
        for (uint16_t i = 0; i < n; ++i) {
            for (uint16_t j = 0; j < (n + 1) / 2; ++j) {
                swap(&(image[i][j]), &(image[i][n - j - 1]));
            }
        }
        return image; 
    }
};