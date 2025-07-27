class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1,e=*max_element(nums.begin(),nums.end()),ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(nums,mid,threshold)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
        return ans;
    }
    bool check(vector<int>&nums,int mid,int k){
        int sum=0;
        for(int i:nums){
            sum+=(i+mid-1)/mid;
            if(sum>k){
                return false;
            }
        }
        return true;
    }
};