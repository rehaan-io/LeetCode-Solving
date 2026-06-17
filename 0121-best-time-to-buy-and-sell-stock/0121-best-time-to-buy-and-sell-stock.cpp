class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int profit = 0;
        for(int i =0; i<prices.size(); i++){
            mini = min(prices[i], mini);
            if(i==0){
                continue;
            }
            profit = prices[i] - mini;
            maxi = max(profit,maxi); 
            
        }
        if(maxi<0){
            return 0;
        }else{
            return maxi;
        }
    }
};