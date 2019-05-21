using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<long>> paths(m, vector<long>(n, 0));
        paths[0][0] = 1 - obstacleGrid[0][0];

        for (int i = 1; i < n; i++) {
            paths[0][i] = obstacleGrid[0][i] == 1 ? 0 : paths[0][i - 1];
        }

        for (int i = 1; i < m; i++) {
            paths[i][0] = obstacleGrid[i][0] == 1 ? 0 : paths[i - 1][0];
        }

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (obstacleGrid[i][j] == 1) paths[i][j] = 0;
                else paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
            }
        }
        return paths[m - 1][n - 1];
    }
};