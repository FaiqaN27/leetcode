class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        int answer1 = 0;
        int answer2 = 0;

        for (int i=0; i<nums1.size(); i++) {
            if (set2.count(nums1[i])) {
                answer1++;
            }
        }

        for (int j=0; j<nums2.size(); j++) {
            if (set1.count(nums2[j])) {
                answer2++;
            }
        }

        return {answer1, answer2};
    }
};