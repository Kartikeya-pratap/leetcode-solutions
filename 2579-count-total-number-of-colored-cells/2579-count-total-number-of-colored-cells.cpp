class Solution {
public:
    long long coloredCells(int n) {
        if(n<=1) return n;
        long long l = 1;
        while(n>1){
            l+=(n-1)*4;
            n--;

        }
        return l; 
    }
};