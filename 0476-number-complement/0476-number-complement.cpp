class Solution {
public:
    int findComplement(int num) {
        long long ans =0;
        long long bits = 0;
        long long two_power = 1;
        while(num>0){
            bits = (num%2)^1;
            
            ans += two_power*bits;
            two_power = two_power*2;
            num/=2;

        }
        return ans;
    }
};