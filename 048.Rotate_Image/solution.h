using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>> &matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                auto a = &matrix[i][j], b = &matrix[j][i];
                *a = *a + *b;
                *b = *a - *b;
                *a = *a - *b;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                auto a = &matrix[i][j], b = &matrix[i][n - 1 - j];
                *a = *a + *b;
                *b = *a - *b;
                *a = *a - *b;

            }
        }
    }
};