/*
You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

    "a->b" if a != b
    "a" if a == b


*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<std::string> ans;
        int32_t start;
        uint8_t flag = 0;

        if (nums.size() == 0) {
            return ans;
        }

        for (size_t i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] != nums[i+1] - 1) {
                if (flag == 0) {
                    //std::cout << 1 << " ";
                    ans.push_back(std::to_string(nums[i]));
                }
                else {
                    std::string a = std::to_string(start);
                    a += "->";
                    a += std::to_string(nums[i]);
                    ans.push_back(a);
                    flag = 0;
                }

            }
            else if (flag == 0)  {
                //std::cout << 2 << " ";
                start = nums[i];
                flag = 1;
            }
        
        }

        if (flag == 0) {
            //std::cout << 1 << " ";
            ans.push_back(std::to_string(nums[nums.size() - 1]));
        }
        else {
            std::string a = std::to_string(start);
            a += "->";
            a += std::to_string(nums[nums.size() - 1]);
            ans.push_back(a);
        }

        return ans;
        
    }
};