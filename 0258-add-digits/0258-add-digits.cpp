class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        int div;
        int mod;
        int i = 0;
        int rum = num;
        while(rum != 0){

            sum = 0;
            while(num !=0){
                mod = num%10;
                sum += mod;
                num = num/10; 
            }
            num = sum;
            rum = num/10;
        }
        return sum;
        
    }
};