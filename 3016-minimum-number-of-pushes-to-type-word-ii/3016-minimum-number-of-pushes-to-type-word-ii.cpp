class Solution {
public:
    int minimumPushes(string word) {
        vector<int> a(26,0);
        
        for(char c:word){
            a[c-'a']++;
        }

        sort(a.begin(),a.end(),greater<int>());
        while(a[a.size()-1]==0){
            a.pop_back();
        }
        int ans=0;

        for(int i=0;i<a.size();i++){
            ans+=((i/8)+1)*a[i];
        }

        return ans;

    }
};