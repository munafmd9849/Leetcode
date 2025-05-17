class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int> (n));
        int i=0,j=0;
        int a=1;
        while(n>1){
            for(int l=1;l<n;l++){
                mat[i][j]=a++;
                j++;
            }
            for(int l=1;l<n;l++){
                mat[i][j]=a++;
                i++;
            }
            for(int l=1;l<n;l++){
                mat[i][j]=a++;
                j--;
            }
            for(int l=1;l<n;l++){
                mat[i][j]=a++;
                i--;
            }
            i++;j++;
            n-=2;
        }
        if(n==1){
            mat[i][j]=a++;
        }
        return mat;
    }
};


