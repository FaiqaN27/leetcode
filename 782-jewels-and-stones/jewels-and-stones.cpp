class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        int count = 0;
        for(auto i : jewels ){
            mp[i] = 0;
        }

        for(auto j: stones){
            if(mp.find(j)!= mp.end()){
                count++;
            }
        }

        return count;
    }
};