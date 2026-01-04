class Solution {
public:
    int jump(vector<int>& nums) {
        int index=0;
        int farthest=0;
        int curri=0;
        int jump=0;
        for(int i=0;i<nums.size()-1;i++){
            farthest=max(farthest,i+nums[i]);
            if(i==curri){
                jump++;
                curri=farthest;
            }


        }
        return jump;
    }
};


