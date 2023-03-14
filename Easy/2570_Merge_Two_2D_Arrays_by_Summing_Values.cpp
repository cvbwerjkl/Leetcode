/*

You are given two 2D integer arrays nums1 and nums2.
    nums1[i] = [idi, vali] indicate that the number with the id idi has a value equal to vali.
    nums2[i] = [idi, vali] indicate that the number with the id idi has a value equal to vali.
Each array contains unique ids and is sorted in ascending order by id.
Merge the two arrays into one array that is sorted in ascending order by id, respecting the following conditions:
    Only ids that appear in at least one of the two arrays should be included in the resulting array.
    Each id should be included only once and its value should be the sum of the values of this id in the two arrays. 
    If the id does not exist in one of the two arrays then its value in that array is considered to be 0.
Return the resulting array. The returned array must be sorted in ascending order by id.

*/

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> summary;

        int n = nums1.size();
        int m = nums2.size();

        int i = 0, j = 0;

        for (int k = 0; k < n + m; ++k) {
            if (i < n && j < m && nums1[i][0] == nums2[j][0]) {
                summary.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                ++i;
                ++j;
                ++k;
            }
            else if (j >= m) {
                summary.push_back({nums1[i][0], nums1[i][1]});
                ++i;
            }
            else if (i >= n) {
                summary.push_back({nums2[j][0], nums2[j][1]});
                ++j;
            }
            else if (nums1[i][0] < nums2[j][0]) {
                summary.push_back({nums1[i][0], nums1[i][1]});
                ++i;
            }
            else if (nums1[i][0] > nums2[j][0]) {
                summary.push_back({nums2[j][0], nums2[j][1]});
                ++j;
            }  
        }

        return summary;
    }
};