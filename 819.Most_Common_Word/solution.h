#include <algorithm>

using namespace std;

class Solution {
public:
    string mostCommonWord(const string &paragraph, vector<string> &banned) {
        unordered_map<string, int> countWorldMap;
        auto pch = strtok((char *) paragraph.c_str(), " ,.!?':;");
        while (pch != nullptr) {
            string curr_word = string(pch);
            transform(curr_word.begin(), curr_word.end(), curr_word.begin(), ::tolower);
            if (find(banned.begin(), banned.end(), curr_word) == banned.end()) countWorldMap[curr_word]++;
            pch = strtok(nullptr, " ,.!?':;");
        }

        vector<pair<string, int>> countWorldVec(countWorldMap.begin(), countWorldMap.end());
        sort(countWorldVec.begin(), countWorldVec.end(),
             [&](pair<string, int> elem1, pair<string, int> elem2) { return elem1.second > elem2.second; });

        return countWorldVec[0].first;
    }
};