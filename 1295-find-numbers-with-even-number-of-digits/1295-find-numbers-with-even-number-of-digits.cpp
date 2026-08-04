class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int total = 0;
        for(int i = 0; i<nums.size();i++){
            int count = 0;
            int cur_arr = nums[i];
            while(cur_arr > 0){
                count++;
                cur_arr = cur_arr/10;
            }
            if(count % 2 == 0){
                total++;

            }
        }
        return total;
    }
};