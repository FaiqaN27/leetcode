class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count = 0;

        for(auto i:nums){
            mp[i]++;
        }

        for(auto j:mp){
            if(j.second == 1){
                count+=j.first;
            }
        }

        return count;
    }
};