class Solution {
public:
    int countPrimes(int n) {
        vector<int> a(n,1);
        for(int i=2;i<n;i++){
            if(a[i]==1){
                for(int j=2;j*i<n;j++){
                    a[i*j]=0;
                }
            }
        }
        int c=0;
        for(int i=2;i<n;i++){
            if(a[i]==1){
                c++;
            }
        }
        return c;
        
    }
};