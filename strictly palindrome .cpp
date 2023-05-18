class Solution {
public:
    bool isPalindrome(string str) {
        string reversed = str;
        reverse(reversed.begin(), reversed.end());
        return str == reversed;
    }

    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i <= n / 2; i++) {
            string str = "";
            int x = n;
            while (x > 0) {
                char digitchar = '0' + x % i;
                str = digitchar + str;
                x = x / i;
            }
            if (!isPalindrome(str)) {
                return false;
            }
        }
        return true;
    }
};
