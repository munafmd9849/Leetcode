class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num=nums[0];
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=num){
                ans.push_back(num);
                num++;
            }
            num++;
        }
        return ans;
    }
};