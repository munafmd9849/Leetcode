class Solution {
public:
    long zeroFilledSubarray(vector<int>& nums) {
        long cnt = 0, ci = 0;
        for (int n : nums) {
            if (n == 0) {
                cnt += ++ci;
            } else {
                ci = 0;
            }
        }
        return cnt;
    }
};