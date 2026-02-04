class Solution {
public:
    int rob2(vector<int>& nums,int s, int e) {
        int n=e-s+1;
        if(n==1){
            return nums[s];
        }
        int dp[3];
        dp[0]=nums[s];
        dp[1]=max(nums[s],nums[s+1]);

        for(int i=s+2;i<=e;i++){
            dp[(i-s)%3]=max(dp[(i-s-1)%3],nums[i]+dp[(i-s-2)%3]);
        }

        return dp[(n-1)%3];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        return max(rob2(nums,0,n-2),
                    rob2(nums,1,n-1));
    }
};