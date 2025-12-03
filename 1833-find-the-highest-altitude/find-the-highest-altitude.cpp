class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int alt = 0;
        int netGain = 0;
        for(int i=0; i<n; i++){
            netGain+=gain[i];
            alt = max(alt,netGain);
        }

        return alt;
    }
};