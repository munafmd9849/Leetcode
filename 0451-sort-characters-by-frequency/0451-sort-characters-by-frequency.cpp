class Solution {
public:
    static bool str(pair<int ,char> s1,pair<int,char> s2){
        if(s1.first==s2.first){
            return s1.second<s2.second;
        }
        else return s1.first>s2.first;
    }
    string frequencySort(string s) {
        vector<pair<int,char>> a;
        unordered_map<char,int>um;
        for(auto c:s){
            um[c]++;
        } 
        for(auto i:um){
            a.push_back({i.second,i.first});
        }
        sort(a.begin(),a.end(),str);

        string ans="";
        for(auto i:a){
            for(int j=0;j<i.first;j++){
                ans+=char(i.second);
            }
        }
        return ans;
    }
};