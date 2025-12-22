class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> num1(nums1.begin() , nums1.end());
        unordered_set<int> num2(nums2.begin() , nums2.end());

        vector<vector<int>>answer(2);

        for(int i:num1){
            if(!num2.count(i)){
                answer[0].push_back(i);
            }
        }

        for(int j:num2){
            if(!num1.count(j)){
                answer[1].push_back(j);
            }
        }

        return answer;
    }
};