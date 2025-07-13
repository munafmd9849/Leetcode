class Solution {
public:
    static bool compare(pair<int,int> s1,pair<int,int> s2){
        if(s1.first==s2.first){
            return s1.second>s2.second;
        }
        else{
            return s1.first<s2.first;
        }
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int ,int>um;
        for(int i:nums){
            um[i]++;

        }
        vector<pair<int,int>> p;
        for(int i:nums){
            p.push_back({um[i],i});
        }
        sort(p.begin(),p.end(),compare);
        for(int i=0;i<nums.size();i++){
            nums[i]=p[i].second;
        }
        return nums;
    }
};