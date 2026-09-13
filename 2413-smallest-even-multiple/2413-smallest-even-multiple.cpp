class Solution {
public:
    int smallestEvenMultiple(int n) {
        int a = n;
        if(n%2==0) return n;
        while(n<a*2){
            if(a%n==0 && a%2==0){
                return a;
            }a++;
        }
        return a;
    }
};