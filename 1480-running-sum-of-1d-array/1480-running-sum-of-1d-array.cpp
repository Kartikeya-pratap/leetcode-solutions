class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> out;
        int num = 0;
        for(int i = 0; i<nums.size(); i++){
            num+= nums[i];
            out.push_back(num);


        }
        return out;
    }
};