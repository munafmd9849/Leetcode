class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        double ans;
        if(n<0){
         long long p=-(long long)n;
            if(p%2==0){
                ans=myPow(x,(int)n/2);
                return ans*ans;
            }
            else{
                ans=myPow(x,(int)(n+1)/2);
                return ans*ans/x;
            }
        }
        else{
            if(n%2==0){
                ans=myPow(x,(int)n/2);
                return ans*ans;
            }
            else{
                ans=myPow(x,(int)(n-1)/2);
                return ans*ans*x;
            }
        }
    }
};