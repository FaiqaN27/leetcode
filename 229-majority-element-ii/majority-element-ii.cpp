class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        vector<int> arr;

        for(int x:nums){
            mp[x]++;
        }

        for(auto i:mp){
            if(i.second > n/3){
                arr.push_back(i.first);
            }
        }

        return arr;
    }
};