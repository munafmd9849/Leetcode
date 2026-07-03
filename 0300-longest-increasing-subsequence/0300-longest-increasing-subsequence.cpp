// class Solution {
// public:
//     int fun(int i,int n, vector<int>& nums){
//         if(i==n){
//             return 0;
//         }
//         int take=0;
//         if(i==0 || nums[i-1]<nums[i]){
//             take=fun(i+1,n,nums)+1;
//         }
//         return max(take,fun(i+1,n,nums));
        
//     }
//     int lengthOfLIS(vector<int>& nums) {  
//         return fun(0,nums.size(),nums);
//     }
// };


class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        vector<int> dp(n+1,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};


