class Solution {
public:
    int findPairs(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int p1=0,p2=1,c=0;
        
        while(p2<arr.size()){
            int t=abs(arr[p2]-arr[p1]);
            if(t==target){
                c++;
                p2++;
            }
            else if(t>target){
                p1++;
                if(p1==p2){
                    p2++;
                }
            }
            else{
                p2++;
            }
        }
        return c;
    }
};

