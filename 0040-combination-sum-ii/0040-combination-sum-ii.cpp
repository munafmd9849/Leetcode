// class Solution {
// public:
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         int sum = 0;
//         for(int i:candidates){
//             sum+=i;
//         }
//         int n=candidates.size();
//         int dp[n+1][sum+1];
//         int s=0;
//         for(int i=0;i<n;i++){
//             dp[i][s]
//         }
//     }
// };


// class Solution {
// public:
//     void fun(int i, int n,int sum,int t, vector<int>& can, vector<vector<int>> &ans, vector<int> &set){
//         if(sum==t){
//             ans.push_back(set);
//             return;
//         }
//         if(i==n){
//             return;
//         }
//         set.push_back(can[i]);
//         fun(i+1,n,sum+can[i],t,can,ans,set);
//         set.pop_back();
//         fun(i+1,n,sum,t,can, ans, set);
//     }

//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         vector<vector<int>> ans(0,vector<int>(0));
//         vector<int> set(0);
//         fun(0,candidates.size(),0,target,candidates,ans,set);
//         return ans;

//     }
// };



// class Solution {
// public:
//     void fun(int i, int n,int sum,int t, vector<pair<int,int>>& can, vector<vector<int>> &ans, vector<int> &set){
//         if(sum==t){
//             ans.push_back(set);
//             return;
//         }
//         if(sum>t || i==n){
//             return;
//         }
//         fun(i+1,n,sum,t,can,ans,set);
//         int x=can[i].first;
//         int feq=can[i].second;
//         for(int k=0;k<feq;k++){
//             set.push_back(x);
//             sum+=x;
//             fun(i+1,n,sum,t,can,ans,set);
//         }
//         for(int k=0;k<feq;k++){
//             set.pop_back();
//             // sum-=x;
//         }

//     }

//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         vector<vector<int>> ans(0,vector<int>(0));
//         vector<int> set(0);
//         int n=candidates.size();
//         unordered_map<int,int> um;
//         for(int i=0;i<n;i++){
//             um[candidates[i]]++;
//         }
//         vector<pair<int,int>> feq;
//         for (auto& [key, value] : um){
//             feq.push_back({key,value});
//         }
//         fun(0,feq.size(),0,target,feq,ans,set);
//         return ans;

//     }
// };


class Solution {
public:
    void backtrack(int start, vector<int>& candidates, int target,
                   vector<int>& curr, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > target) break;                    
            if (i > start && candidates[i] == candidates[i-1]) continue;  
            curr.push_back(candidates[i]);
            backtrack(i + 1, candidates, target - candidates[i], curr, ans);
            curr.pop_back();                                      
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());               
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(0, candidates, target, curr, ans);
        return ans;
    }
};