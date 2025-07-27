class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int s=1,ans=-1;
        int e=1e7;
        
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(dist,mid,hour)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        
    }
    bool check(vector<int>&dist,int mid,double hour){
        double time=0;
        for(int i=0;i<dist.size();i++){
            if(i!=dist.size()-1)
            time+=(dist[i]+mid-1)/mid;
            else{
                time+=(double)dist[i]/mid;
            }
        }
        if(time<=hour){
            return true;
        }
        else{
            return false;
        }
    }
};