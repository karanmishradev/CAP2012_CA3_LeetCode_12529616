// LeetCode 26: Remove Duplicates from Sorted Array
// Approach: Two-pointer technique (slow and fast pointers)
// Time Complexity: O(n), Space Complexity: O(1)

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int uniqueIdx = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[uniqueIdx]) {
                uniqueIdx++;
                nums[uniqueIdx] = nums[i];
            }
        }
        return uniqueIdx + 1;
    }
};
