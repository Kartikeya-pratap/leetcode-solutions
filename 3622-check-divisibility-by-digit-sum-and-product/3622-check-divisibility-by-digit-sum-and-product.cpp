class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int orignal = n;
        while(n>0){
            sum+=n%10;
            product*=n%10;
            n/=10; 
        }
        return orignal%(sum+product)==0;
    }
};