class Solution {
public:
    int minimumSum(int num) {
        int digits[4];
        int i = 0;
        while (num > 0) {
            digits[i++] = num % 10;
            num /= 10;
        }
        sort(digits, digits + 4);
        int new1 = digits[0] * 10 + digits[2];
        int new2 = digits[1] * 10 + digits[3];
        return new1 + new2;
    }
};