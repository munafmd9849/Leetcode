class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1=0,p2=height.size()-1;
        int maxi=-1;
        
        while(p1<p2){
            int length=p2-p1;
            int minH=min(height[p1],height[p2]);
            maxi=max((minH*length),maxi);
            if(height[p1]>height[p2]){
                p2--;
            }
            else{
                p1++;
            }
        }
        return maxi;

    }
};