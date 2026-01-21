class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>st;

        for(int i:arr){
            mp[i]++;
        }

        for(auto j:mp){
            st.insert(j.second);
        }

        return mp.size() == st.size();
    }
};