class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i:nums){
            a[i]++;
        }
        for(auto i:a){
            if(i.second>=2){
                return true;
            }
        }
        return false;
    }
};