/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.


*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int step = 0;
        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) ++step;
            if (step !=0 && nums[i] != 0) {
                nums[i - step] = nums[i];
            }
        }

        for (size_t k = nums.size() - step; k < nums.size(); ++k) {
            nums[k] = 0;
        }
        
        
    }
};