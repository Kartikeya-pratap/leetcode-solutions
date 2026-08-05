class Solution {
public:
    int search(vector<int>& nums, int target) {
        int total = nums.size() - 1;
        int left = 0;
        int right = total ;
        while(right>=left){
            int mid = left + (right-left)/2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};