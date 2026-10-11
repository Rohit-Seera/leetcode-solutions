// LeetCode 231 - Power of Two
// Difficulty: Easy
// Approach: Recursively divide by 2
// Time Complexity: O(log n)
// Space Complexity: O(log n) - recursion stack

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) {
            return true;
        }

        if (n <= 0 || n % 2 != 0) {
            return false;
        }

        return isPowerOfTwo(n / 2);
    }
};