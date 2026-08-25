class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> us;
        int n=nums.size();
        for(int i=0;i<n;i++){
            us.insert(nums[i]);
        }
        int i=1;
        while(us.find(i*k)!=us.end()){
            i++;
        }
        return i*k;
    }
};