class Solution {
public:
    int mySqrt(int x) {
        int l=1, r = x, ans= 0;
        if(x == 0 || x == 1) return x;
        // if(x == 2) return 1;
        while( l <= r ){
            int mid = l+(r-l)/2;
            if(1LL * mid * mid <= x){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        return ans;
    }
};