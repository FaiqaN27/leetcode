class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int arr[101] = {0};
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (arr[nums[i]]) {
                count += arr[nums[i]];
                arr[nums[i]]++;
            } else {
                arr[nums[i]]++;
            }
        }

        return count;
    }
};