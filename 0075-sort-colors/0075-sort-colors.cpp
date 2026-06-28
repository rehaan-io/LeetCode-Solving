class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i =1; i<nums.size(); i++){
            int current_num = nums[i];
            int previous_num = i-1;
            while(previous_num >= 0 && nums[previous_num]>current_num){
                nums[previous_num+1] = nums[previous_num];
                previous_num--;
            }
            nums[previous_num+1] = current_num;
        

        }
    }
};