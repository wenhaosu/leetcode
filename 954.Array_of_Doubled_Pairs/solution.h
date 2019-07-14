using namespace std;

class Solution {
public:
    bool canReorderDoubled(vector<int> &A) {
        unordered_map<int, int> map;
        vector<int> keys;
        for (auto a:A) map[a]++;
        for (auto idx:map) keys.push_back(idx.first);
        sort(keys.begin(), keys.end(), [](int a, int b) { return abs(a) < abs(b); });
        for (auto key : keys) {
            if (map[key] > map[2 * key]) return false;
            map[2 * key] -= map[key];
        }
        return true;
    }
};