using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> map;
        for (char char_s : s) {
            map[char_s]++;
        }
        for (char char_t : t) {
            map[char_t]--;
        }
        for (auto item : map) {
            if (item.second != 0) return item.first;
        }
        return 0;
    }
};