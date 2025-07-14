class Solution {
public:
    int splitArray(vector<int>& nums, int k){
        int s=1,e=nums.size(),ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            int t=check(nums,mid,k);
            if(t!=-1){
                ans=t;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    int check(vector<int> nums,int mid,int k){
        int p=1,s=0,sum=0,ans=0;
        for(int i:nums){
            s++;sum+=i;
            if(s>k){
                p++;
                s=0;
                sum=0;
            }
            ans=max(sum,ans);
        }
        if(p==k){
            return ans;
        }
        else{
            return -1;
        }
    }
};