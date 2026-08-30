class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int total = nums.size();
        int min_index = 0;
        int max_index = 0;
        for (int i = 0; i < total; i++) {
            if (nums[i] < nums[min_index]) {
                min_index = i;
            }
            if (nums[i] > nums[max_index]) {
                max_index = i;
            }
        }
        int left = min(min_index, max_index);
        int right = max(min_index, max_index);
        int fromFront = right + 1;
        int fromBack = total - left;
        int fromBothSides = (left + 1) + (total - right);
        return min({fromFront, fromBack, fromBothSides});
    }
};