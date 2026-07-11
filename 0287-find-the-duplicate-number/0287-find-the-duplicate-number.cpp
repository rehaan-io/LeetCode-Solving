class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> ans(n, 0);
        for(int i =0; i<nums.size();i++){
            ans[nums[i]-1] +=1;
        }
        for(int k =0; k<ans.size(); k++){
            if(ans[k] > 1){
                return k+1;
            }
        }
        return -1;
        
    }
};