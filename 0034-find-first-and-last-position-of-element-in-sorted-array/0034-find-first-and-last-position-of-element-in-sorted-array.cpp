class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        int max_ind = INT_MIN;
        int min_ind = INT_MAX;
        vector<int> final;
        while(st<=end){
            int current_ind =0;
            int mid = st + (end-st)/2;
            if(nums[mid] == target){
                current_ind = mid;
                max_ind = max(current_ind, max_ind);
            }
            if(target>=nums[mid]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        st = 0;
        end = nums.size()-1;
        while(st<=end){
            int current_ind =0;
            int mid = st + (end-st)/2;
            cout<<mid<<endl;
            if(nums[mid] == target){
                current_ind = mid;
                min_ind = min(current_ind, min_ind);
                cout<<min_ind<<endl;
            }
            if(target<=nums[mid]){
                end = mid-1;
                cout<<end<<endl;
            }else{
                st = mid+1;
                cout<<st<<endl;
            }
        }
       
        if(max_ind == INT_MIN && min_ind == INT_MAX){
            final.push_back(-1);
            final.push_back(-1);
        }else{
            final.push_back(min_ind);
            final.push_back(max_ind);
        }
        
        return final;
    }
};