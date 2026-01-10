class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        backtrack(0,candidates,candidates.size(),target,ans,0,temp);
        return ans;
    }


    void backtrack(int i,vector<int>& arr,int n,int target,vector<vector<int>> & ans,int sum,vector<int>& temp){
        if(sum>target){
            return;
        }
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(i==n){
            if(sum==target){
                ans.push_back(temp);
                return;
            }
            else{
                return;
            }
        }


        backtrack(i+1,arr,n,target,ans,sum,temp);

        for(int j=1;j<=target/arr[i];j++){
            sum+=arr[i];
            temp.push_back(arr[i]);
            backtrack(i+1,arr,n,target,ans,sum,temp);
        }
        for(int j=1;j<=target/arr[i];j++){
            sum-=arr[i];
            temp.pop_back();  
        }


    }
};