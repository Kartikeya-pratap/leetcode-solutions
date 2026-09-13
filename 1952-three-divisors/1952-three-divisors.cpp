class Solution {
public:
    bool isThree(int n) {
        if(n<=3) return false;
        int count = 2;
        int a = n/2;
        while(a>1){
            
            if(n%a==0){
                count++;
            }
            a--;
        }
        return count == 3;
    }
};