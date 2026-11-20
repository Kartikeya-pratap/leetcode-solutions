class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;
        double ans = 1;
        if (power < 0) {
            
            power = -power;
        }
        while (power > 0) {
            if (power % 2 == 1) {
                ans *= x;
            }
            x *= x;
            power /= 2;
        }
        return (n < 0) ? (1.0 / ans) : ans;
    }
};