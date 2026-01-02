class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto x:nums){
             if(mp.count(x)){
                return x;
            }
            else{
                mp[x]++;
            }
        }

        return 0;
    }
};