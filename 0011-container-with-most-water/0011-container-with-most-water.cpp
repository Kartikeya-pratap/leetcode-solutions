class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int v = 0;
        while(left<right){
            int a = (right-left)*min(height[left],height[right]);
            v = max(v, a);
            if(height[left]>height[right]) right--;
            else left++;
        }
        return v;
    }
};