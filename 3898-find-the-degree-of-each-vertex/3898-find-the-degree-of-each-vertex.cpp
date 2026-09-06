class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector <int> sum;
        for(int i = 0; i<matrix.size();i++){
            int s = 0;
            for(int j = 0; j<matrix[i].size(); j++){
                s+=matrix[i][j];
            }
            sum.push_back(s);
        }
        return {sum};
    }
};