class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> lm(n,-1);
        stack<int> tem;
        for(int i=0;i<n;i++){
            while(tem.size()>0 && heights[tem.top()]>=heights[i]){
                tem.pop();
            }
            if(tem.size()>0){
                lm[i]=tem.top();
            }
            tem.push(i);
        }

        vector<int> rm(n,n);
        stack<int> tem2;
        for(int i=n-1;i>=0;i--){
            while(tem2.size()>0 && heights[tem2.top()]>=heights[i]){
                tem2.pop();
            }
            if(tem2.size()>0){
                rm[i]=tem2.top();
            }
            tem2.push(i);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,heights[i]*(rm[i]-lm[i]-1));
        }
        return ans;


    }
};