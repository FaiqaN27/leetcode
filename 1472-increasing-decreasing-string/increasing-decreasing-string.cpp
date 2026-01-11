class Solution {
public:
    string sortString(string s) {
        unordered_map<char, int> mp;
        string res = "";

        for (auto ch : s) {
            mp[ch]++;
        }

        while (res.size() < s.size()) {
            for (char i = 'a'; i <= 'z'; i++) {
                if (mp[i] > 0) {
                    res += i;
                    mp[i]--;
                }
            }

            for (char i = 'z'; i >= 'a'; i--) {
                if (mp[i] > 0) {
                        res += i;
                        mp[i]--;
                    }
            }
        }

        return res;
    }
};