class Solution {
public:
    int countPartitions(vector<int>& nums) {
       int n=nums.size();
       int ans=0;
       for(int i=0;i<n-1;i++){
            int lsum=0,rsum=0;
            for(int j=i;j>=0;j--){
                lsum+=nums[j];
            }
            for(int j=i+1;j<n;j++){
                rsum+=nums[j];
            }
            if((lsum-rsum)%2==0){
                ans++;
            }
       }
       return ans;
    }
};