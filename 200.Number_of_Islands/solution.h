using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>> &grid) {
        if (grid.empty()) return 0;
        stack<pair<int, int>> remain;
        int result = 0;
        for (int row = 0; row < grid.size(); row++) {
            for (int col = 0; col < grid[0].size(); col++) {
                if (grid[row][col] == '0') continue;
                remain.push(make_pair(row, col));
                result++;
                while (!remain.empty()) {
                    auto candi = remain.top();
                    remain.pop();
                    grid[candi.first][candi.second] = '0';
                    for (int i = -1; i < 2; i++) {
                        for (int j = -1; j < 2; j++) {
                            int temp_row = candi.first + i, temp_col = candi.second + j;
                            if (abs(i + j) != 1 || temp_row < 0 || temp_col < 0 ||
                                temp_row >= grid.size() || temp_col >= grid[0].size() ||
                                grid[temp_row][temp_col] == '0')
                                continue;
                            remain.push(make_pair(temp_row, temp_col));
                            grid[temp_row][temp_col] = '0';
                        }
                    }
                }
            }
        }
        return result;
    }
};