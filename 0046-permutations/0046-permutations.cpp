class Solution {
public:

    void allPer(int i,int n,vector<int> &p,vector<int> b,vector<int> &nums,vector<vector<int>> &ans){
        if(i==n){
            ans.push_back(p);
            return;
        }

        for(int j=0;j<n;j++){
            if(b[j]==1){
                b[j]=0;
                p[i]=nums[j];
                allPer(i+1,n,p,b,nums,ans);
                b[j]=1;
            }
        }



    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans(0);
        int n=nums.size();
        vector<int> p(n,0);
        vector<int> b(n,1);
        allPer(0,n,p,b,nums,ans);
        return ans;
    }
};