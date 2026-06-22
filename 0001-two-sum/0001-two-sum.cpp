class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        unordered_map<int, int> um;  
        for (int i = 0; i < nums.size(); i++) {
            int complement = k - nums[i];
            if (um.find(complement) != um.end()) {
                return {um[complement], i};
            }
            um[nums[i]] = i;
        }
        return {-1, -1};  
    }
};
