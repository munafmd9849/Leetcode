class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
    unordered_set<int> m;
    for (int i = 0; i < nums.size(); i++) {
        int sq = sqrt(nums[i]);

        for (int j = 2; j <= sq; j++) {
            if (nums[i] % j == 0) {

                m.insert(j);
                while (nums[i] % j == 0) {
                    nums[i] /= j;
                }
            }
        }
        if (nums[i] > 1) {
            m.insert(nums[i]);
        }
    }
    return m.size();

    }
};