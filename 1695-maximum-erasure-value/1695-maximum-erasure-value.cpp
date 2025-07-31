class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int p1=0,p2=-1;
        unordered_map<int,int> um;
        int sum=0,maxi=0;
        while(p2<n){
            if(p2-p1+1 == um.size()){
                maxi=max(sum,maxi);
                p2++;
                if(p2==n){break;}
                um[nums[p2]]++;
                sum+=nums[p2];
            }
            else{
                sum-=nums[p1];
                um[nums[p1]]--;
                if(um[nums[p1]]==0){
                    um.erase(nums[p1]);
                }
                p1++;
            }
        }
        return maxi;
     }
};