class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;
        k %= total;
        while (k > 0) {
            int last = grid.back().back();
            for (int i = m - 2; i >= 0; i--) {
                grid[i + 1].insert(grid[i + 1].begin(), grid[i].back());
                grid[i].pop_back();
            }
            grid[0].insert(grid[0].begin(), last);
            grid.back().pop_back();
            k--;
        }
        return grid;
    }
};