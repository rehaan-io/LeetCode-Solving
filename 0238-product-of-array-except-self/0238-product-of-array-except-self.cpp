class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prev_product;
        vector<int> nums2;
        vector<int> right_product;
        int prev_pro = 1;
        int right_pro = 1;
        for(int i = 1; i<nums.size(); i++){
           prev_pro = nums[i-1]*prev_pro;
           prev_product.push_back(prev_pro);
           cout<< prev_pro <<endl;
        }
        for(int j = nums.size()-2; j>=0; j-- ){
            right_pro = nums[j+1]*right_pro;
            right_product.push_back(right_pro);
            cout<<right_pro<<endl;
        }
        for(int k =0; k<nums.size(); k++){
            if(k==0){
                nums2.push_back(right_product[right_product.size()-1]);
            }else if(k==nums.size()-1){
                nums2.push_back(prev_product[prev_product.size()-1]);
            }else{
                int final =0;
                final = right_product[right_product.size()-k-1]*prev_product[k-1];
                nums2.push_back(final);
            }
            
        }
        return nums2;
    }
};