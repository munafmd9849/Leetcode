class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        long sum=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>ans){
                ans=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return ans;
    }
};