class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int ,int>  um;
        for(int i=0;i<n;i++){
            um[nums[i]]=i;
        }
        for(int i:nums){
            if(um.find(k-i)!=um.end()){
                return {um[i],um[k-i]};
            }
        }
        return {0,0};
    }
};