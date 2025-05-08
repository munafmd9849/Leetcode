class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0,n=nums.size();
        vector<int> pfsum(n);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            pfsum[i]=sum;
        }
        return pfsum;

    }
};