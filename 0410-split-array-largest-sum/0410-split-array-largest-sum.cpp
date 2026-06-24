class Solution {
public:
    bool canSplit(vector<int>& nums, int m, long long limit) {
        int subarrays = 1;
        long long currSum = 0;

        for (int num : nums) {
            if (currSum + num <= limit) {
                currSum += num;
            } else {
                subarrays++;
                currSum = num;
            }
        }

        return subarrays <= m;
    }

    int splitArray(vector<int>& nums, int m) {

        long long left = *max_element(nums.begin(), nums.end());
        long long right = 0;

        for (int num : nums)
            right += num;

        while (left <= right) {

            long long mid = left + (right - left) / 2;

            if (canSplit(nums, m, mid)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};