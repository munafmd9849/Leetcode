class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> um;
        for(char c:s){
            um[c]++;
        }
        int i=0;
        for(char c:s){
            if(um[c]==1){
                return i;
            }
            i++;
        }
        return -1;
    }
};