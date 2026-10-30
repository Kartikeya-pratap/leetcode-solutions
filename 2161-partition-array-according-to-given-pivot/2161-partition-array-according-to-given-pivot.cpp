class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> equal;
        vector<int> greater;
        for (int num : nums) {
            if (num < pivot) {
                less.push_back(num);
            } else if (num == pivot) {
                equal.push_back(num);
            } else {
                greater.push_back(num);
            }
        }
        int idx = 0;
        for (int num : less) nums[idx++] = num;
        for (int num : equal) nums[idx++] = num;
        for (int num : greater) nums[idx++] = num;
        return nums;
    }
};