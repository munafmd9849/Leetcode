class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<int ,int> a;
        for(char i:s){
            a[i]++;
        }
        char ans;
        for(char i:t){
            if(a.find(i)!=a.end()){
                continue;
            }
            else{
                ans=i;
            }
        }
        return ans;
    }
};