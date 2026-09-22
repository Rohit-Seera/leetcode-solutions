// LeetCode 541 - Reverse String II
// Difficulty: Easy
// Approach: Reverse the first k characters in every 2k block
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            int l = i;
            int r = min(i + k - 1, (int)s.size() - 1);

            while (l < r) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }

        return s;
    }
};
