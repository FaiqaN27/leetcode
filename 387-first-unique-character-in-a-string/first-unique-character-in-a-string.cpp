class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};

        for(char i:s){
            arr[i - 'a']++;
        }

        for(int j=0; j<s.size(); j++){
            if(arr[s[j] - 'a'] == 1) {
                return j;
            }
        }

        return -1;
    }
};