class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums2;

        for (int count = 0; count < 2; count++) {
            for (int i = 0; i < nums.size(); i++) {
                nums2.push_back(nums[i]);
            }
        }

        return nums2;
    }
};