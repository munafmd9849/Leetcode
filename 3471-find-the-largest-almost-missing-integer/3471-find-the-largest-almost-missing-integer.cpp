class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int o1=0;
        int ol=0;
        int n=nums.size();
        if(k==1){
            unordered_map<int,int> um;
            for(int i:nums){
                um[i]++;
            }
            int ans=-1;
            for(auto[i,f] : um){
                if(f==1 && i>ans){
                    ans=i;
                }
            }
            return ans;
        }

        if(k==n){
            return *max_element(nums.begin(), nums.end());
        }
        
        int first=0;
        int last=0;
        for(int i=0;i<n;i++){
            if(i!=0 && nums[0]==nums[i]){
                first++;
            }
            if(i!=n-1 && nums[n-1]==nums[i]){
                last++;
            }
        }
        if(first==0 && last==0){
            return max(nums[0],nums[n-1]);
        }else if(first==0){
            return nums[0];
        }else if(last==0){
            return nums[n-1];
        }else{
            return -1;
        }
    }
};