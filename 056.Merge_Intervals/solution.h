using namespace std;

class Solution {
public:
    vector <vector<int>> merge(vector <vector<int>> &intervals) {
        vector <vector<int>> res;
        if (intervals.size() <= 1) return intervals;
        sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int> &b) {
            return a[0] == b[0] ? a[1] < b[1] : a[0] < b[0];
        });
        int begin = intervals[0][0], end = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (end < intervals[i][0]) {
                res.push_back({begin, end});
                begin = intervals[i][0];
            }
            end = max(end, intervals[i][1]);
        }
        res.push_back({begin, end});
        return res;
    }
};