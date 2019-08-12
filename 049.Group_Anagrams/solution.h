using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> hash;
        vector<vector<string>> result;
        for (auto str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            hash[temp].push_back(str);
        }
        for (auto p : hash)
            result.push_back(p.second);
        return result;
    }
};