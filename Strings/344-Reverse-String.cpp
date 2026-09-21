// LeetCode 344 - Reverse String
// Difficulty: Easy
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};
