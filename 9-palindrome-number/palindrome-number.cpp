class Solution {
public:
    bool isPalindrome(long long x) {
        if (x < 0)
            return false;

        long long original = x;
        long long revNum = 0;

        while (x > 0) {
            long long digit = x % 10;
            revNum = revNum * 10 + digit;
            x = x / 10;
        }

        return original == revNum;
    }
};