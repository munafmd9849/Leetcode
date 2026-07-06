class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int> &curr=intervals[0];
        int ans=0;
        for(int i=1;i<intervals.size();i++){
            vector<int> &tem=intervals[i];
            if((curr[0]<=tem[0] && tem[1]<=curr[1])){
                ans++;
            }else if(curr[0]>=tem[0] && tem[1]>=curr[1]){
                ans++;
                curr=tem;
            }else{
                curr=tem;
            }
        }
        return intervals.size()-ans;
    }
};
// cd curr
// ab tem

// c <=a      b<=  d
// a c   d b