class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i-1]+1==nums[i]){
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        unordered_set<int> us;
        for(int i:nums){
            us.insert(i);
        }
        while(us.find(sum)!=us.end()){
            sum++;
        }
        return sum++;

    }
};