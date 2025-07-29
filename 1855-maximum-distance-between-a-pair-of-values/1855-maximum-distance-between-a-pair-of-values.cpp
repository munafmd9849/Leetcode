class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int p1=0,p2=0,n=nums1.size(),m=nums2.size();
        int dist=0;
        while(1){
            if(nums2[p2]>=nums1[p1]){
                dist=max(p2-p1,dist);
                p2++;
                if(p2==m){break;}
            }
            else{
                if(p1==p2){
                    p2++;
                    if(p2==m){break;}
                }
                else{
                    p1++;
                    if(p1==n)break;
                }
            }
        }
        return dist;
    }
};