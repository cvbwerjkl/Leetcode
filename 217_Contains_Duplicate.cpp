/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        std::unordered_map<uint32_t, uint16_t> freq;

        for (size_t i = 0; i < nums.size(); ++i) {
            ++freq[nums[i]];
            if (freq[nums[i]] > 1) {
                return 1;
            }
        }
        
        return 0;
    }
};