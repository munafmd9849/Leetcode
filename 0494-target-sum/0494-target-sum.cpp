// class Solution {
// public:
    
//     int findTargetSumWays(vector<int>& nums, int target) {
//         vector<vector<int>>dp(n,vector<int>(k));

//         dp[i][j]=

//     }
// };




















class Solution {
public:
    int fun(int n,vector<int>& nums,int target,int sum ,
            vector<vector<int>> &dp,int offset){
        if(n==-1){
            if(sum==target)return 1;
            else return 0; 
        }
        if(dp[n][sum+offset]==-1){
            dp[n][sum+offset]=fun(n-1,nums,target,sum+nums[n],dp,offset) +
            fun(n-1,nums,target,sum-nums[n],dp,offset);
        }
        return dp[n][sum+offset];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int totalSum=0;
        for(int i:nums){
            totalSum+=i;
        }
        vector<vector<int>> dp(n,vector<int>(totalSum*2+1,-1));
        return fun(n-1,nums,target,0,dp,totalSum);
    }
};