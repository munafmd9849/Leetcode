class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long sum=0;
        vector<long> pf(n);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            pf[i]=sum;
        }
        unordered_map<long,int>um;
        um[0]=1;
        int c=0;
        for(long i:pf){
            if(um.find(i-k)!=um.end()){
                c+=um[i-k];
            }
            um[i]++;
        }
        return c;
    }
};