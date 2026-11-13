class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        vector<int> d(s.begin(), s.end());
        int t = d.size();
        if(t>=3){
            return d[t-3];
        }
        return d[t-1];
    }
};