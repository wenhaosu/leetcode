using namespace std;

class Solution {
public:

    bool isValidRow(vector<vector<char>> &board, int row) {
        vector<bool> status(9, false);
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == '.') continue;
            if (status[board[row][i] - '1']) return false;
            status[board[row][i] - '1'] = true;
        }
        return true;
    }

    bool isValidCol(vector<vector<char>> &board, int col) {
        vector<bool> status(9, false);
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == '.') continue;
            if (status[board[i][col] - '1']) return false;
            status[board[i][col] - '1'] = true;
        }
        return true;
    }

    bool isValidArea(vector<vector<char>> &board, int row, int col) {
        vector<bool> status(9, false);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[row + i][col + j] == '.') continue;
                if (status[board[row + i][col + j] - '1']) return false;
                status[board[row + i][col + j] - '1'] = true;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>> &board) {
        for (int i = 0; i < 9; i++) {
            if (!isValidRow(board, i)) return false;
            if (!isValidCol(board, i)) return false;
        }
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                if (!isValidArea(board, i, j)) return false;
            }
        }
        return true;
    }
};