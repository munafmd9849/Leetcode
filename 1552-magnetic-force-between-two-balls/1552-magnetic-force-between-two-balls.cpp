class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size(),ans;
        int s=1,e=*max_element(position.begin(),position.end());
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(position,mid,m)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;

    }
    bool check(vector<int >&a,int mid,int m){
        int ball=1;
        int last_ball=a[0];
        for(int i=1;i<a.size();i++){
            if(a[i]-last_ball>=mid){
                ball++;
                last_ball=a[i];
            }
        }
        if(ball>=m){
            return true;
        }
        else return false;;
    }
};