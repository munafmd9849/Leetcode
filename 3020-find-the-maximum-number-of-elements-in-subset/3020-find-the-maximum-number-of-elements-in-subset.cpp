class Solution {
public:
    using ll = long long;
    const ll LIMIT = 10e9 + 1;
    int maximumLength(vector<int>& nums) {
        unordered_map<int, int> count;
        for (auto& x : nums)
            count[x]++;
        int res = 1;
        for (auto& x : nums) {
            int curr = 0;
            if (x == 1)
                curr = count[x] - (count[x] % 2 == 0);
            else {
                bool mid=false;
                for (ll y = x; y < LIMIT; y *= y) {
                    if (count[y] >= 2)
                        curr += 2;
                    else if (count[y] == 1) {
                        curr += 1;
                        mid=true;
                        break;
                    } else {
                        break;
                    }
                }
                if(!mid)
                   curr--;
            }
            res = max(res, curr);
        }
        return res;
    }
};