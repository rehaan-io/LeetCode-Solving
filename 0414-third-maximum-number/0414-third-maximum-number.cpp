class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int max_number = INT_MIN;
        
        if(nums.size()<3){
            return nums[0];
        }else{
            int count_1 =0;
            int count_2 =0;
            int second_index =0;
            int third_number =0;
            int third_found = -1;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] == nums[0]){
                    count_1 +=1;
                }else{
                    second_index = i;
                    break;
                }
            }
            for(int i = second_index; i<nums.size(); i++){
                if(nums[i] == nums[second_index]){
                    count_1 +=1;
                }else{
                    third_number = nums[i];
                    third_found = i;
                    break;
                }
            }
            if(third_found == -1){
                return nums[0];
            }else{
                return third_number;
            }
            ;  
            
        }
        return -1;
    }
};