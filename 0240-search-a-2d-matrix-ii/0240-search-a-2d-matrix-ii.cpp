class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int st =0;
        int end = matrix[0].size()-1;
        int i = 0;
        while(i<matrix.size()){
            if(matrix[i][0]>target){
                return false;
            }
            st =0;
            end = matrix[0].size()-1; 
            while(st<=end){
                int mid = st+(end-st)/2;
                // cout<<matrix[i][mid]<<endl;
                if(target==matrix[i][mid]){
                    return true;
                }else if(target<matrix[i][mid]){
                    end = mid-1;
                }else if(target>matrix[i][mid]){
                    st = mid+1;
                }
            }
            i++;
        }
        return false;    
    }
};  