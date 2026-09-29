class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;

        int left = 0;
        int right = 0;
        int maxLength = 0;

        while (right < s.length()) {

            while (seen.find(s[right]) != seen.end()) {
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[right]);

            maxLength = max(maxLength, right - left + 1);

            right++;
        }

        return maxLength;
    }
};