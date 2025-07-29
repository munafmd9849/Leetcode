class Solution {
public:
    int minPairSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());  
      int p1=0,p2=nums.size()-1;
      int ans=0;
      while(p1<p2){
        ans=max(ans,nums[p1]+nums[p2]);
        p1++;p2--;
      }
      return ans;
    }
};