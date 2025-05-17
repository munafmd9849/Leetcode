class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pd=1;
        int n=nums.size();
        int flag=1;
        // vector<int> pf(n);
        for(int i=0;i<n;i++){
            if(flag==0 && nums[i]==0){
                return vector<int> (n,0);
            }
            else if(nums[i]==0){
                flag=0;
                continue;
            }else
            pd*=nums[i];
            // pf[i]=pd;
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(flag==0){
                if(nums[i]!=0){
                    ans[i]=0;
                }
                else{
                    ans[i]=pd;
                }
            }
            else
                ans[i]=pd/nums[i];
        }
        return ans;

    }
};