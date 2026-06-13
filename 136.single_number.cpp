class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        for(int i: nums){
            int a = 0;
            for(int j : nums){
                if(i==j){
                    a++;
                }
                           
            }
            if(a == 1){
                return i;
            }
        }
        return -1;
    }
};
