class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows = matrix.size();
        int col = matrix[0].size();
        int f =0;
        int i = 0;
        int j = 0;
        int count = rows*col;
        int c =0;
        while(c<count){
            while(j<col){
                // cout<<matrix[i][j]<<endl;
                ans.push_back(matrix[i][j]);
                j++;
                c++;
            }
            if(c==count){
                break;
            }
            i+=1;
            j-=1;

            while(i<rows){
                //  cout<<matrix[i][j]<<endl;
                ans.push_back(matrix[i][j]);
                i++;
                c++;
            }
            if(c==count){
                break;
            }
            i-=1;
            j-=1;
            while(j>=f){

                // cout<<matrix[i][j]<<endl;
                ans.push_back(matrix[i][j]);

                j--;
                c++;
            }
            if(c==count){
                break;
            }
            j+=1;
            i-=1;
            while(i>=f+1){
                // cout<<matrix[i][j]<<endl;
                ans.push_back(matrix[i][j]);
                i--;
                c++;
            }
            if(c==count){
                break;
            }
            i+=1;
            j+=1;
            rows-=1;
            col-=1;
            f+=1;

            

        }
        
        return ans;
    }
};