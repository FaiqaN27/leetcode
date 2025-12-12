class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        char sArr[256] = {0};
        char tArr[256] = {0};

        for(int i=0; i<s.size(); i++){
            char sCh = s[i];
            char tCh = t[i];

            if(sArr[sCh] != tArr[tCh]) return false;

            sArr[sCh] = i+1;
            tArr[tCh] = i+1;
        }

        return true;
    }
};