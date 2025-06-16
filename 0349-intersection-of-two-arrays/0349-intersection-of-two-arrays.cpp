class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int ,int> a;
        vector<int> ans;
        for(auto i :nums1){
            a[i]++;
        }
        for(int i:nums2){
            if(a.find(i)!=a.end()){
                ans.push_back(i);
                a.erase(i);
            }
        }
        return ans;
        
    }
};