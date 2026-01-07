class Solution {
public:

bool isGoodWord(string word, unordered_map<char,int>mp){
    for(int j=0; j<word.size(); j++){
        if(mp[word[j]] > 0){
            mp[word[j]]--;
        }
        else{
            return false;
        }
    }
    return true;
}

    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        int count = 0;
        for(auto x:chars){
            mp[x]++;
        }

        for(int i=0; i<words.size(); i++){
            if(isGoodWord(words[i] , mp)){
                count += words[i].size();
            }
        }

        return count;
    }
};