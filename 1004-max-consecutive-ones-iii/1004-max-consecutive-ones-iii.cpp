class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int p1=0,p2=-1,n=nums.size();
        int sum=0,maxi=0;
        while(1){
            if(p2-p1+1-sum>k){
                sum-=nums[p1];
                p1++;
                if(p1==p2){
                    p2++;
                if(p2==n){
                    break;
                }
                }
            }
            else{
                maxi=max(maxi,p2-p1+1);
                p2++;
                if(p2==n){
                    break;
                }
                sum+=nums[p2];
            }

        }
        return maxi;
    }
};