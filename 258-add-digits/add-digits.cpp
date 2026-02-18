class Solution {
public:
    int addDigits(int num) {
        
        while(num > 9){
            int sum = 0;
            while(num > 0){
            int rev = num%10;
             num = num/10;
             sum = sum +rev;  
            }
            num =sum;
        }

        return num;
    }
};