class Solution {
public:
    bool isPalindromic(string& word) {
        int left = 0;
        int right = word.size() - 1;
        while (left <= right) {
            if (word[left] != word[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {

        for (int i = 0; i < words.size(); i++) {
            if (isPalindromic(words[i])) {
                return words[i];
            }
        }

        return "";
    }
};