class Solution {
public:
    int maximumLengthSubstring(string s) {

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {

            for (int j = i; j < s.length(); j++) {

                int count = 0;

                for (int k = i; k <= j; k++) {
                    if (s[k] == s[j]) {
                        count++;
                    }
                }

                if (count > 2) {
                    break;
                }

                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};