class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        set<vector<int>> uniqueTriplets;
        int total = nums.size();
        int left;
        int right;
        int sum;
        for(int i =0; i<total-2; i++){
            left = i+1;
            right = total - 1;
            if(nums[i]>0){
                break;
        }
            while(left < right){
                sum = nums[i]+nums[left]+nums[right];
                if(sum==0){
                    uniqueTriplets.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }else if(sum<0){
                    left++;
                }else{
                    right--;
                }
            }
        } 
        vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
        return ans;
    }
};