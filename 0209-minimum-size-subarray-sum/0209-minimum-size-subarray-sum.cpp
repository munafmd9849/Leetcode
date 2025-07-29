class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int ans=INT_MAX;
        int p1=0,p2=-1;
        int sum=0;
        while(1){
            if(sum>=k){
                ans=min(ans,p2-p1+1);
                sum-=nums[p1];
                p1++;
            }
            else{
                p2++;
                if(p2==nums.size()) {break;}
                sum+=nums[p2];
            }
        }
        return ans==INT_MAX?0:ans;
    }
};