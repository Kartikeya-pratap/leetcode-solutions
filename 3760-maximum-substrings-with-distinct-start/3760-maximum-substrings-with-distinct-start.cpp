class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> seen(s.begin(), s.end());
        return seen.size();
    }
};