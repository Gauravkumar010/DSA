class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int row = grid.size();
        int col = grid[0].size();

        for(int i=0;i<k/2;i++){
        for(int j=0;j<k;j++){
            swap(grid[x+i][j+y], grid[x+k-1-i][j+y]);
        }
        }

        return grid;

    }
};