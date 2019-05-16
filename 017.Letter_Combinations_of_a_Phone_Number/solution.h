using namespace std;

class Solution {

    array<string, 10> digitCharMap = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

public:
    vector<string> letterCombinations(string digits) {

        int digit_length = digits.size();
        vector<string> results;

        if (digit_length == 0) return results;

        if (digit_length == 1) {
            for (const auto &c: digitCharMap[digits[0] - '0']) {
                results.emplace_back(1, c);
            }
            return results;
        }

        const auto sub_results = letterCombinations(digits.substr(1, digit_length - 1));
        for (const auto &c: digitCharMap[digits[0] - '0']) {
            for (const auto &sub_res: sub_results) {
                results.push_back(c + sub_res);
            }
        }
        return results;
    }
};