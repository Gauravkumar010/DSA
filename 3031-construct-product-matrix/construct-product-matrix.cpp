class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

       vector<vector<int>> p(row,vector<int>(col));
        int MOD = 12345;

        long long suffix = 1;

        for(int i=row-1;i>=0;i--){
            for(int j=col -1;j>=0;j--){
                p[i][j] = suffix;
                suffix = suffix * grid[i][j] % MOD;
            }
        }

        long long prefix = 1;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
            p[i][j] = p[i][j] * prefix % MOD;
            prefix = prefix * grid[i][j] % MOD;
                
            }
        }
       return p;
    }
};