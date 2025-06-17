class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> umm;
        unordered_map<int,int> umr;
        for(char c:magazine){
            umm[c]++;
        }
        for(char c:ransomNote){
            umr[c]++;
        }
        for(auto i:umr){
            if(umr[i.first]>umm[i.first]){
                return false;
            }
        }
        return true;
    }
};