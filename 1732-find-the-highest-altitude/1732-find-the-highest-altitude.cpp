class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int sum=0;
        for(int i:gain){
            sum+=i;
            ans=max(sum,ans);
        }
        return ans;
    }
};