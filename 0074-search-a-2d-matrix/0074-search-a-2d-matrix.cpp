class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int st = 0;
        int end = matrix.size()-1;
        int st_2 =0;
        int end_2 = matrix[0].size()-1;
        int mid_1 = st + (end-st)/2;
        int mid_2 = st + (end_2-st)/2;
        while(st<=end){
            mid_1 = st + (end-st)/2;
            cout<<matrix[mid_1][0]<<endl;
            cout<<matrix[mid_1][end_2]<<endl;
            if(matrix[mid_1][0] <=target && matrix[mid_1][end_2] >=target){
                mid_2 = st_2 + (end_2-st_2)/2;
                cout<<mid_2;
                cout<<matrix[mid_1][mid_2];
                while(st_2<=end_2){
                    mid_2 = st_2 + (end_2-st_2)/2;
                    if(matrix[mid_1][mid_2] == target){
                        return true;
                    }else if(matrix[mid_1][mid_2]>target){
                        end_2 = mid_2-1;
                    }else if(matrix[mid_1][mid_2]< target){
                        st_2 = mid_2+1;
                    }
                }
                return false;

            }else if(matrix[mid_1][0]<target){
                st = mid_1+1;
            }else if(matrix[mid_1][end_2]>target){
                end = mid_1-1;
            }

        }
        return false;
    }
};