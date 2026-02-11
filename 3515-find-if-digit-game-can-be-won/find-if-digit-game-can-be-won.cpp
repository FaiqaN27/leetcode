class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sSum = 0;
        int dSum = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] <= 9){
                sSum+=nums[i];
            }
            else{
                dSum+=nums[i];
            }
        }

        return sSum > dSum || sSum < dSum;
    }
};