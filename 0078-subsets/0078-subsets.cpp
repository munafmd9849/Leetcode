class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        uniquesubset(0,nums,temp,ans,nums.size());
        return ans;
    }
    void uniquesubset(int i,vector<int>& nums,vector<int> & temp,vector<vector<int>> & ans,int n){

        if(i==n){
            ans.push_back(temp);
            return;
        }



        temp.push_back(nums[i]);
        uniquesubset(i+1,nums,temp,ans,n);
        temp.pop_back();
        uniquesubset(i+1,nums,temp,ans,n);
        return;
    }
};