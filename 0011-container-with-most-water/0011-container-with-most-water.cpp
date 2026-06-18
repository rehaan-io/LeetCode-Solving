class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_number = INT_MIN;
        int max_count = 0;
        int previous_max = 0;
        long long max_index = 0;
        int max_area = INT_MIN;
        for(int i=0; i<height.size(); i++){
            max_number = max(height[i], max_number);
            if(max_number == previous_max){

            }else{
                max_index = i;
            }
            previous_max = max_number;
        }
        int distance = 0;
        int current_area =0;
        
        int k = 0;
        int l = height.size()-1;
        while(k!=l){
            distance = abs((k+1)-(l+1));
            current_area = ((min(height[k],height[l])*distance));
            max_area = max(current_area, max_area);
            cout<<current_area<<endl;
            if(height[k]<height[l]){
                k++;
            }else if(height[k]==height[l]){
                l--;
            }else{
                l--;
            }
        }
       
        return max_area;
    }
};