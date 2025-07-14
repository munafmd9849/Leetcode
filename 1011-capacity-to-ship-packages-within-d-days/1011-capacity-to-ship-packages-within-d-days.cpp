class Solution {
public:
    int shipWithinDays(vector<int>& nums, int k) {
         int maxi=nums[0],sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi=max(maxi,nums[i]);
        }
        int s=maxi,e=sum,ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(possible(nums,mid,k)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    bool possible(vector<int>& nums,int mid, int k){
        int p=1;
        int weight=0;
        for(int i:nums){
            weight+=i;
            if(weight>mid){
                weight=i;
                p++;
                if(p>k)return false;
            }
        }
        return true;
    }
};