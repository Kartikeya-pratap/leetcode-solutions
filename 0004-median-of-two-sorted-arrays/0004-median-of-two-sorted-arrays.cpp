class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size() + nums2.size());;
        merge(nums1.begin(), nums1.end(),nums2.begin(), nums2.end(),ans.begin());
        int length = ans.size();
        if(length%2==0){
            return (float)(ans[length/2-1]+ans[length/2])/2;

        }else{
            return (float)ans[((length+1)/2)-1];
        }
    }
};