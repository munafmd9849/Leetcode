class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        vector<int> cI(2);
        cI[0]=a[0][0];
        cI[1]=a[0][1];
        vector<vector<int>> ans(0,vector<int>(2));

        for(int i=0;i<a.size();i++){
            if(a[i][0]>cI[1] || a[i][1]<cI[0]){
                ans.push_back(cI);
                cI=a[i];
            }
            else{
                cI[0]=min(cI[0],a[i][0]);
                cI[1]=max(cI[1],a[i][1]);
            }
        }
        ans.push_back(cI);
        return ans;
    }
};