class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int left = 0;
        int right = nums.size()-1;

        while(left <= right){
            int mid = left + (right-left)/2;

            if(nums[mid] == target){
                ans.push_back(mid);
                right = mid-1;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else if(nums[mid] > target){
                right = mid-1;
            }
        }
        if(ans.size() == 0){
            return {-1,-1};
        }
        left = 0;
        right = nums.size()-1;

        while(left <= right){
            int mid = left + (right-left)/2;

            if(nums[mid] == target){
                ans.push_back(mid);
                left = mid+1;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else if(nums[mid] > target){
                right = mid-1;
            }
        }
        sort(ans.begin(), ans.end());
        return {ans[0], ans[ans.size()-1]};
    }
};