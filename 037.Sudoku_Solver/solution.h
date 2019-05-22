using namespace std;

class Solution {
private:
    struct cell {
        short value;
        short numPoss;
        bitset<10> constraints;

        cell() : value(0), numPoss(9), constraints() {};
    };

    array<array<cell, 9>, 9> cells;
    vector<pair<int, int>> emptyCells;

    bool setCell(int i, int j, int val) {
        cell &target = cells[i][j];
        if (target.value == val) return true;
        if (target.constraints[val]) return false;

        target.constraints = bitset<10>(0b1111111110);
        target.constraints.reset(val);
        target.numPoss = 1;
        target.value = val;

        for (int k = 0; k < 9; k++) {
            if (i != k && !updateConstraints(k, j, val)) return false;
            if (j != k && !updateConstraints(i, k, val)) return false;

            int ix = (i / 3) * 3 + k / 3;
            int jx = (j / 3) * 3 + k % 3;
            if (i != ix && j != jx && !updateConstraints(ix, jx, val)) return false;
        }

        return true;
    }

    bool updateConstraints(int i, int j, int excludedVal) {
        cell &target = cells[i][j];
        if (target.constraints[excludedVal]) return true;
        if (target.value == excludedVal) return false;
        target.constraints.set(excludedVal);
        target.numPoss--;
        if (target.numPoss == 1) {
            for (int v = 1; v <= 9; v++) {
                if (!target.constraints[v]) return setCell(i, j, v);
            }
        }
        return true;
    }

    bool fillEmptyCells() {
        emptyCells.clear();
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (cells[i][j].value == 0) emptyCells.emplace_back(i, j);
            }
        }

        sort(emptyCells.begin(), emptyCells.end(), [this](const pair<int, int> &a, const pair<int, int> &b) {
            return cells[a.first][a.second].numPoss < cells[b.first][b.second].numPoss;
        });

        return backtrackFill(0);

    }

    bool backtrackFill(int k) {
        if (k >= emptyCells.size()) return true;
        int i = emptyCells[k].first, j = emptyCells[k].second;
        if (cells[i][j].value != 0) return backtrackFill(k + 1);
        auto constraints = cells[i][j].constraints;

        array<array<cell, 9>, 9> snapshot(cells);
        for (int v = 1; v <= 9; v++) {
            if (!constraints[v]) {
                if (setCell(i, j, v)) {
                    if (backtrackFill(k + 1)) return true;
                }
                cells = snapshot;
            }
        }
        return false;
    }


public:
    void solveSudoku(vector<vector<char>> &board) {
        cells = array<array<cell, 9>, 9>();

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.' && !setCell(i, j, board[i][j] - '0'))
                    return;
            }
        }

        if (!fillEmptyCells()) return;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                board[i][j] = cells[i][j].value + '0';
            }
        }
    }
};