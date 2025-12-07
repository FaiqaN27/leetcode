class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1 = 0;
        int w2 = 0;
        string combo = "";
        while(w1<word1.size() || w2<word2.size()){
            if(w1<word1.size()){
                combo.push_back(word1[w1]);
                w1++;
            }
            if(w2<word2.size()){
                combo.push_back(word2[w2]);
                w2++;
            }
        }

        return combo;
    }
};