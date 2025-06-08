class Solution {
public:
    int titleToNumber(string c) {
        int n=c.length();
        long cof=1;
        int res=0;
        for(int i=n-1;i>=0;i--){
            res+=(c[i]-64)*cof;
            cof*=26;
        }
        return res;

    }
};