class Solution {
public:
    int sum(int a){
        int b = 0;
        while(a){
            b+=a%10;
            a/=10;
        }
        return b;
    }
    int minElement(vector<int>& nums) {
        int x = sum(nums[0]);
        for(int i = 1; i<nums.size();i++){
            x = min(x,sum(nums[i]));
        }
        return x;
    }
};