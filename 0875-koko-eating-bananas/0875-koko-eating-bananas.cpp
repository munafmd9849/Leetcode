class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size(),ans=0;
        int s=1;
        long e=0;
        for(int i:piles){
            if(i>e){
                e=i;
            }
        }
        while(s<=e){
            int mid =s+(e-s)/2;
            if(check(piles,mid,h)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
    bool check(vector<int> piles,int mid, int h){
        long hr=0;
        for(int i:piles){
            hr+=(i+mid-1)/mid;
        }
        if(hr<=h){
            return true;
        }
        else{
            return false;
        }
    }
};