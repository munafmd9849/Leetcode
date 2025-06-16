class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int ,int> a1;
        unordered_map<int ,int> a2;
        for(auto  i:nums1){
            a1[i]++;
        }
        for(auto  i:nums2){
            a2[i]++;
        }
        for(auto i:a1){
            if(a2.find(i.first)!=a2.end()){
                
                for(int k=0;k<min(i.second,a2[i.first]);k++){
                    ans.push_back(i.first);
                }
            }
        }
        return ans;
    }
};