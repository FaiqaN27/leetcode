class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp =0;
        int tp = 0;
        while(tp<t.size() && sp<s.size()){
            if(s[sp] == t[tp]){
                sp++;
                tp++;
            }
            else{
                tp++;
            }
        }

        return sp == s.size();
    }
};