// LeetCode 125 - Valid Palindrome
// Difficulty: Easy
// Approach: Clean the string, then use recursion with two pointers
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool solve(string &s, int left, int right) {
        if (left >= right) {
            return true;
        }

        if (s[left] != s[right]) {
            return false;
        }

        return solve(s, left + 1, right - 1);
    }

    bool isPalindrome(string s) {
        string temp;

        for (char c : s) {
            if (isalnum(c)) {
                temp += tolower(c);
            }
        }

        return solve(temp, 0, temp.length() - 1);
    }
};