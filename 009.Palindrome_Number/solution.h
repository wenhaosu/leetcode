class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        if(x < 0 || (x % 10 == 0 && x != 0)) return false;
        unsigned long result = 0;
        for( ; temp; temp = temp/10)
            result = result*10 + temp%10;
        return (x == result);
    }
};