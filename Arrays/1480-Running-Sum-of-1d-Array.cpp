// LeetCode 1480 - Running Sum of 1d Array
// Difficulty: Easy
// Approach: Prefix Sum / Running Sum
// Time Complexity: O(n)
// Space Complexity: O(1) extra space

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum = nums[i] + sum;
            nums[i] = sum;
        }

        return nums;
    }
};