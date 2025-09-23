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
    
    int maximalRectangle(vector<vector<char>>& mat) {
        
        
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> matrix (n,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='1'){
                    matrix[i][j]=1;
                }
                else{
                     matrix[i][j]=0;
                }
            }
        }




        for(int j=0;j<m;j++){
            int c=0;
            for(int i=0;i<n;i++){
                if(matrix[i][j]==1){
                    c++;
                }
                else{
                    c=0;
                }
                matrix[i][j]=c;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,largestRectangleArea(matrix[i]));
        }
        return ans;
        


    }
   
};