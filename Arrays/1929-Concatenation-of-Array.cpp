// LeetCode 1929 - Concatenation of Array
// Difficulty: Easy
// Approach: Copy the array, then append all elements again
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;

        for (int x : nums) {
            ans.push_back(x);
        }

        return ans;
    }
};