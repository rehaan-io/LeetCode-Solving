class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int previous = 0;
        int current = 1;
        vector<int> ind;
        while(current < nums.size()){
            if(nums[previous]==nums[current]){
                ind.push_back(current);
            }else{
                previous = current;
            }
            current++;
        }
        for(int i = 0; i<ind.size();i++){
            nums.erase(nums.begin() + (ind[i]-i));
        }
        return nums.size();
    }
};