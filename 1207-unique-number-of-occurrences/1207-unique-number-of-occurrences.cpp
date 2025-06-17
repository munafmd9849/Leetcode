class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int ,int > freq;
        for(int i:arr){
            freq[i]++;
        }
        unordered_set<int> a;
        for(auto i:freq){
            if(a.find(i.second)!=a.end()){
                return false;
            }
            a.insert(i.second);
        }
        return true;
    }
};