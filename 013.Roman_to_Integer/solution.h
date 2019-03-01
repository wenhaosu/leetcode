using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanMap
                {
                        {'I', 1},
                        {'V', 5},
                        {'X', 10},
                        {'L', 50},
                        {'C', 100},
                        {'D', 500},
                        {'M', 1000}
                };

        int result = 0;
        int min_val = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            int val = romanMap[s[i]];
            val >= min_val ? result += val : result -= val;
            min_val = max(val, min_val);
        }

        return result;
    }
};