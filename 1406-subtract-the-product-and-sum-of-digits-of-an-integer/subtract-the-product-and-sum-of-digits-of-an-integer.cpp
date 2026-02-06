class Solution {
public:
    int subtractProductAndSum(int n) {
     int sSum = 0;
     int pSum = 1;

     while(n!=0){
        int rev = n%10;
        n = n/10;
        sSum += rev;
        pSum *= rev;
     }   

     return pSum - sSum;
    }
};