class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& nI) {
        vector<vector<int>> ans(0,vector<int>(2));
        for(int i=0;i<a.size();i++){
            if(a[i][0]>nI[1] || a[i][1]<nI[0]){
                if(a[i][1]<nI[0]){
                    ans.push_back(a[i]);
                }
                else{
                    ans.push_back(nI);
                    for(int j=i;j<a.size();j++){
                        ans.push_back(a[j]);
                    }
                    return ans;
                }
            }
            else{
                nI[0]=min(a[i][0],nI[0]);
                nI[1]=max(a[i][1],nI[1]);
            }
        }
        ans.push_back(nI);
        return ans;
    }
};

