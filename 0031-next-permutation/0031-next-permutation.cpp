class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot;
        int swap_val = nums.size()-1;
        int i = nums.size()-2;
        while(i>=0){
            if(nums[i]<nums[i+1]){
                pivot = i;
                if(nums[swap_val] == nums[pivot] || nums[swap_val]<nums[pivot]){
                    swap_val--;
                    continue;
                }
                break;
            }
            i--;
        }
        swap(nums[pivot], nums[swap_val]);
        sort(nums.begin()+pivot+1, nums.end());
    }
};