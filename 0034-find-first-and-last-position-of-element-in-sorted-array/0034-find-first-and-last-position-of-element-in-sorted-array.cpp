class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0,e=n-1;
        vector<int>ans(2,-1);
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==k){
                int t=mid;
                ans[0]=mid;
                ans[1]=mid;
                while(t>0 && nums[t-1]==k){
                    if(nums[t-1]==k){
                        ans[0]=t-1;
                    }
                    t--;
                }
                while(t<n-1 && nums[t+1]==k){
                    if(nums[t+1]==k){
                        ans[1]=t+1;
                    }
                    t++;
                }
            }
            if(k<nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};