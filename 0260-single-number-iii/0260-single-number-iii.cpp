class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++){
            x=x^nums[i];
        }
        int pos=0;
        for(int i=0;i<32;i++){
            if((x>>i) & 1){
                pos=i;
            }
        }
        int set=0,unset=0;
        for(int i=0;i<n;i++){
            if((nums[i]>>pos) &1){
                set=set^nums[i];
            }
            else{
                unset=unset^nums[i];
            }
        }
        vector<int> ans(2);
        ans[0]=set;
        ans[1]=unset;
        return ans;
      
        
    }
};