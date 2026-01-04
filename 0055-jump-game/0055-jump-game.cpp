class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxreach){
                return false;
            }
            maxreach=max(i+nums[i],maxreach);
            if(maxreach>=nums.size()-1)
            return true;
        }
        return true;
    }
};
