class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
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
            if(um.find((i%k+k)%k)!=um.end()){
                c+=um[(i%k+k)%k];
            }
            um[(i%k+k)%k]++;
        }
        return c;
    }
};



// i+j=s if s%k==0
// (i+j)%k=0=k%k

// (i%k+j%k)%k=k%k
// i%k+j%k=k
// i%k=-(j%k+k)%k