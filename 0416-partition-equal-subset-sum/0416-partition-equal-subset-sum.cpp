class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        for(int i:nums){
            total+=i;
        }
        if(total%2!=0){
            return false;
        }
        int target =total/2;
        vector<vector<bool>> dp(n,vector<bool>(target+1));
        if(nums[0]<=target){
            dp[0][nums[0]]=true;
        }
        dp[0][0]=true;
        for(int i=1;i<n;i++){
            dp[i][0]=true;
            for(int j=1;j<=target;j++){
                bool nt=dp[i-1][j];
                bool tk=false;
                if(nums[i]<=j){
                    tk=dp[i-1][j-nums[i]];
                }
                dp[i][j]=tk || nt;
            }
        }

        return dp[n-1][target];


        
    }
};








// class Solution {
// public:
//     int fun(int i, vector<int>& nums,int sum,vector<vector<int>> &dp){
//         if(sum==0){
//             return 1;
//         }
//         if(i<0 || sum<0){
//             return 0;
//         }

//         if(dp[i][sum]==-1){
//             dp[i][sum]=fun(i-1,nums,sum,dp) || fun(i-1,nums,sum-nums[i],dp);
//         }

//         return dp[i][sum];
        
//     }
//     bool canPartition(vector<int>& nums) {
//         int total=0;
//         int n=nums.size();
//         for(int i:nums){
//             total+=i;
//         }
//         if(total%2!=0){
//             return false;
//         }
//         vector<vector<int>>  dp(n,vector<int>(total/2+1,-1));
//         fun(nums.size()-1,nums,total/2,dp);
//         return dp[nums.size()-1][total/2];
//     }
// };