class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int orignal = n;
        while(n>0){
            int digit = n%10;
            rev = rev*10 + digit;
            n/=10;
        }
        if((rev - orignal) > 0){
            return rev - orignal;
        }else{
            return orignal - rev;
        }
    }
};