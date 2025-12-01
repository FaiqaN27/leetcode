class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        int n = x;
        int rev = 0;
        while (n != 0) {
            int rem = n % 10;
            if (rev < INT_MIN / 10 || rev > INT_MAX / 10)
                return false;
            n = n / 10;
            rev = (rev * 10) + rem;
        }

        return x == rev;
    }
};