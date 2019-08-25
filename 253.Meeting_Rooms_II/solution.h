#include <queue>

using namespace std;

class Solution {
public:
    int minMeetingRooms(vector<vector<int>> &intervals) {
        if (intervals.empty()) return 0;

        auto comp = [](int lhs, int rhs) { return lhs >= rhs; };

        priority_queue<int, vector<int>, decltype(comp)> table(comp);
        sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b) {
            if (a[0] == b[0]) return a[1] <= b[1]; else return a[0] < b[0];
        });
        table.push(intervals[0][1]);
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] >= table.top()) table.pop();
            table.push(intervals[i][1]);
        }
        return table.size();
    }
};