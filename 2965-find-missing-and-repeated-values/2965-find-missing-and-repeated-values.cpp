class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>ans((n*n),0);
        cout<<ans.size()<<endl;
        vector<int>j = {-1, -1};
        
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                int num = grid[i][j];
                ans[num-1] +=1;
                
            }
        }
        for(int k = 0; k<ans.size(); k++){
            if(ans[k]==2){
                j[0] = k+1;
            }
            if(ans[k]==0){
                j[1] = k+1;
            }
        }
        cout<<j[0]<<endl;
        return j;
        
    }
};