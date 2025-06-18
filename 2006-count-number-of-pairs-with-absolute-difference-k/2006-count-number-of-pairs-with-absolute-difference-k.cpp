class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size(),c=0;

        unordered_map<int,int> um;
        for(int i:nums){
            c+=um[i-k]+um[i+k];
            um[i]++;
        }
        return c;
    }
};
