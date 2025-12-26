class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> num1;
        unordered_map<int,int> num2;
        int answer1 = 0;
        int answer2 = 0;

        for(int i:nums1){
            num1[i]++;
        }

        for(int j:nums2){
            num2[j]++;
        }

        for(auto x:num1){
            if(num2.find(x.first) != num2.end()){
                answer1 += x.second;
            }
        }

        for(auto y:num2){
            if(num1.find(y.first) != num1.end()){
                answer2 += y.second;
            }
        }

        return {answer1,answer2};
    }
};