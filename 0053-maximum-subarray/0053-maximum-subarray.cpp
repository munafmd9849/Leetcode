class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0], maxi = nums[0];
        for (int i = 1, n = nums.size(); i < n; ++i) {
            curr = max(nums[i], curr + nums[i]);
            maxi = max(maxi, curr);
        }
        return maxi;
    }
};