// LeetCode 1 - Two Sum
// Difficulty: Easy
// Approach: Recursion (check every pair)
// Time Complexity: O(n^2)
// Space Complexity: O(n) - recursion stack

class Solution {
public:

    vector<int> solve(int i, int j, vector<int>& nums, int target) {

        int n = nums.size();

        // Agar poora array check ho gaya
        if (i == n - 1) {
            return {};
        }

        // j array ke end tak pahunch gaya
        if (j == n) {
            return solve(i + 1, i + 2, nums, target);
        }

        // Pair mil gaya
        if (nums[i] + nums[j] == target) {
            return {i, j};
        }

        // Next j
        return solve(i, j + 1, nums, target);
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        return solve(0, 1, nums, target);
    }
};