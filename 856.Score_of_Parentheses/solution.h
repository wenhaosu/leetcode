using namespace std;

class Solution {
public:
    int scoreOfParentheses(string S) {

        /// Solution with Stack

//        stack<int> score;
//        int curr = 0;
//        for (char s : S) {
//            if (s == '(') {
//                score.push(curr);
//                curr = 0;
//            } else {
//                curr += score.top() + max(curr, 1);
//                score.pop();
//            }
//        }
//        return curr;

        /// Solution O(1) in space

        int layer = 0, result = 0;
        for (int i = 0; i < S.length(); i++) {
            if (S[i] == '(') layer++;
            else layer--;
            if (S[i] == ')' && S[i - 1] == '(') result += 1 << layer;
        }
        return result;
    }
};