class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=nums[0];
        int mini=nums[n-1];
        int maxarr[n];
        maxarr[0]=nums[0];
        int minarr[n];
        minarr[n-1]=nums[n-1];
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            maxarr[i]=maxi;
            if(nums[n-i-1]<mini){
                mini=nums[n-i-1];
            }
            minarr[n-1-i]=mini;
        }
        
        for(int i=0;i<n;i++){
            if(maxarr[i]-minarr[i]<=k){
                return i;
            }
        }
        return -1;
    }
};