using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {

        if (p[0] == '*') return false;

        if (p.length() >= 4 && p.substr(0, 1) == p.substr(2, 3)) return isMatch(s, p.substr(2));

        if (p.empty()) return s.empty();
        if (s.empty()) {
            if (p.length() == 1 || p[1] != '*') return false;
            return isMatch(s, p.substr(2));
        }

        if (p.length() == 1) return (s.length() == 1 && p == ".") || s == p;

        if (p[0] != '.') {
            if (s[0] != p[0]) return p[1] == '*' ? isMatch(s, p.substr(2)) : false;
            else
                return p[1] == '*' ? isMatch(s.substr(1), p) || isMatch(s.substr(1), p.substr(2)) ||
                                     isMatch(s, p.substr(2)) : isMatch(s.substr(1), p.substr(1));
        } else {
            if (p[1] != '*') return isMatch(s.substr(1), p.substr(1));
            else return isMatch(s.substr(1), p) || isMatch(s.substr(1), p.substr(2)) || isMatch(s, p.substr(2));
        }
    }
};