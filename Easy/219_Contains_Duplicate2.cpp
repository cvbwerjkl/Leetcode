/*
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.


*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int32_t, int32_t> window;

        for (size_t i = 1; i <= nums.size(); ++i) {
            //std::cout << nums[i - 1] << " ";
            if (window[nums[i - 1]] == 0) {
                window[nums[i - 1]] = i;
                //std::cout << window[nums[i - 1]] << " ";
            }
            else if (i - window[nums[i - 1]] <= k) return 1;
            else {
                window[nums[i - 1]] = i;
            }
        }

        /* slow solution
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            for (size_t j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j] && (j - i) <= k) return 1;
            }
        }
        */

        return 0;
    }
};