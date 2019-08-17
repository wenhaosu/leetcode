using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<pair<int, int>> range(26, pair<int, int>(-1, -1));
        for (int i = 0; i < S.length(); i++) {
            char s = S[i];
            if (range[s - 'a'].first == -1)
                range[s - 'a'].first = range[s - 'a'].second = i;
            else if (i > range[s - 'a'].second) range[s - 'a'].second = i;
        }
        for (int i = 0; i < range.size(); i++)
            if (range[i].first == -1) range.erase(range.begin() + i--);
        sort(range.begin(), range.end(), [](pair<int, int> a, pair<int, int> b) { return a.first < b.first; });

        vector<int> result;
        for (int i = 0; i < range.size(); i++) {
            int begin = range[i].first, end = range[i].second;
            for (int j = i + 1; j < range.size(); j++) {
                if (range[j].first > end) {
                    i = j - 1;
                    break;
                } else {
                    if (range[j].second < end) continue;
                    else end = range[j].second;
                }
            }
            result.push_back(end - begin + 1);
            if (end == S.length() - 1) break;
        }
        return result;
    }
};