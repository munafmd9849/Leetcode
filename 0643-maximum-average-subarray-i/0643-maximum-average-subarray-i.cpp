class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int s=0,e=k;
        long ans=sum;
        while(e<nums.size()){
            sum-=nums[s];
            sum+=nums[e];
            if(ans<sum){
                ans=sum;
            }
            s++;e++;
        }
        return static_cast<double>(ans)/k;
    }
};