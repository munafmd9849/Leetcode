class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us;
        for(int i:nums){
            us.insert(i);
        }
        int ans=0;
        for(auto i:us){
            if(us.find(i-1)==us.end()){
                int l=1,s=i;
                while(us.find(s+1)!=us.end()){
                    l++;
                    s++;
                }
                ans=max(l,ans);
            }

        }
        return ans;
    }
};