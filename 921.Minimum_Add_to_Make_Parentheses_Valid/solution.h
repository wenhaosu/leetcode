using namespace std;

class Solution {
public:
    int minAddToMakeValid(string S) {
        int left = 0, result = 0;
        for (char s:S) {
            if (s == '(') left++;
            else if (left > 0) left--;
            else result++;
        }
        return result + left;
    }
};