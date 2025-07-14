class Solution {
public:
    bool isPerfectSquare(int x) {
        if(x==1){
            return true;
        }
        int s=1,e=x;
        while(s<=e){
            long mid=s+(e-s)/2;
            if(mid*mid==x){
                return true;
            }
            if(mid*mid<x){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
};