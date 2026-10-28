class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start;
        for(int i = 0;i<n-1;i++){
            start+=2;
            ans=ans^start;
        }
        return ans;
    }
};