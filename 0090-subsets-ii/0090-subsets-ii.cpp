class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<pair<int,int>> freq;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            freq.push_back({it.first,it.second});
        }
        vector<int> temp;

        function(0,freq,freq.size(),ans,temp);
        return ans;
        
    }
    void function(int i,vector<pair<int,int>> &freq,int n,vector<vector<int>>& ans,vector<int>& temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }

        int elem=freq[i].first;
        int fre=freq[i].second;
        function(i+1,freq,n,ans,temp);
        for(int j=1;j<=fre;j++){
            temp.push_back(elem);
            function(i+1,freq,n,ans,temp);
        }
        for(int j=1;j<=fre;j++){
            
            temp.pop_back();
        }
        return;
        
    }

};