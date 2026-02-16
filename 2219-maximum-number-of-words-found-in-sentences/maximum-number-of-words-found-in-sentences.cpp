class Solution {
public:
    int maxWords(string s, int count) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                count++;
            }
        }
        return count;
    }
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;

        for (int i = 0; i < sentences.size(); i++) {
        int count = 1;
        count = maxWords(sentences[i], count);
        maxCount = max(maxCount,count);
        }
         return maxCount;
    
    }
};