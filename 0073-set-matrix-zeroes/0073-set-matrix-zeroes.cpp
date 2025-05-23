class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        
        int n=a.size(),m=a[0].size(),flag=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==0){
                    if(j==0){
                        flag=0;
                    }
                    else{
                        a[i][0]=0;
                        a[0][j]=0;
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[0][j]==0 || a[i][0]==0){
                    a[i][j]=0;
                }
            }
        }
        if(a[0][0]==0){
            for(int j=0;j<m;j++){
                a[0][j]=0;
            }
        }
        if(flag==0){
            for(int i=0;i<n;i++){
                a[i][0]=0;
            }
        }
      

    }
};