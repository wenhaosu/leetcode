using namespace std;

class Solution {
public:
    vector<vector<string>> partition(const string &s) {
        vector<vector<string>> result;
        vector<string> v;
        // Partition "aab" to ["a", "a", "b"]
        for (int i = 0; i < s.length(); i++) {
            v.push_back(s.substr(i, 1));
        }
        slove(0, v, result);
        return result;
    }

private:
    void slove(int begin, vector<string> vec, vector<vector<string>> &result) {
        for (int i = begin; i < (int) vec.size(); i++) {

            // Satisfy "a", "b", "a"
            if (i > 0 && i < vec.size() - 1 && vec[i - 1] == vec[i + 1]) {
                // Modify ["a", "a", "bb", "a", "a"] to ["a", "abba", "a"]
                string str = vec[i - 1] + vec[i] + vec[i + 1];
                vector<string> tmp(vec.begin(), vec.end());
                tmp[i] = str;
                tmp.erase(tmp.begin() + i + 1);
                tmp.erase(tmp.begin() + i - 1);
                slove(i - 1, tmp, result);
            }

            // Satisfy "a", "a"
            if (i > 0 && vec[i].length() == 1 && vec[i] == vec[i - 1]) {
                // Modify ["a", "b", "b", "a"] to ["a", "bb", "a"]
                string str = vec[i - 1] + vec[i];
                vector<string> tmp(vec.begin(), vec.end());
                tmp[i] = str;
                tmp.erase(tmp.begin() + i - 1);
                slove(i - 1, tmp, result);
            }
        }

        result.push_back(vec);
    }
};