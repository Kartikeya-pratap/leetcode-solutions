class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int total = nums.size();
        vector<int> a;
        for(int i = 0;i<total-1; i++){
            while(nums[i]+1 != nums[i+1]){
                a.push_back(nums[i]+1);
                nums[i]++;
            }
        }
        return a;
    }
};