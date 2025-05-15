class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            int max=nums[i],min=nums[i];
            for(int j=i;j<n;j++){
                if(nums[j]>max){
                    max=nums[j];
                }
                else if(nums[j]<min){
                    min=nums[j];
                }
                ans+=max-min;
            }
        }
        return ans;
    }
};