class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n != 0) {
            int rev = n % 10;
            n = n / 10;
            sum += rev;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int dSum = 0;
        int eSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            eSum += nums[i];
            dSum = dSum + digitSum(nums[i]);
        }

        return eSum - dSum;
    }
};