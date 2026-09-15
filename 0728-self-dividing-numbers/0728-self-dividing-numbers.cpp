class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> list;
        
        for (int i = left; i <= right; i++) {
            int a = i;
            bool isSelfDividing = true;
            while (a > 0) {
                int digit = a % 10;
                if (digit == 0 || i % digit != 0) {
                    isSelfDividing = false;
                    break;
                }
                a /= 10;
            }
            
            if (isSelfDividing) {
                list.push_back(i);
            }
        }
        
        return list;
    }
};