class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> noth = {0,0};
        for(int i =0; i< nums.size(); i++){
            for(int j= 0; j< nums.size(); j++){
                if(i != j){
                    if((nums[i]+ nums[j])==target){
                        vector<int> final;
                        final.push_back(i);
                        final.push_back(j);
                        return final;
                    }
                }
            }
        }
        return noth;
    }
};
