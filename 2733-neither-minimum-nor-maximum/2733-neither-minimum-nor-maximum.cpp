class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        vector<int> d(s.begin(), s.end());
        int t = d.size();
        if(t<=2){
            return -1;
        }
        return d[t/2];

    }
};