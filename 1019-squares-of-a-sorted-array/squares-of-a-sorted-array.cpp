class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int>num(n);
        int left = 0;
        int right = n-1;
        int idx = n-1;
        while(left<=right){
            int leftSqr = nums[left]*nums[left];
            int rightSqr = nums[right]*nums[right];
            if(rightSqr> leftSqr){
                num[idx] = rightSqr;
                right--;
            }
            else{
                num[idx] = leftSqr;
                left++;
            }
            idx--;
        }

        return num;
    }
};