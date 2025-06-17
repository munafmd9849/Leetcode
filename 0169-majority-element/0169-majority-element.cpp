class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int ,int> frq;
        int n=nums.size();
        for(int i:nums){
            frq[i]++;
        }
        int maxf=0,ans;
        for(int i:nums){
            if(frq[i]>n/2){
                if(frq[i]>maxf){
                    maxf=frq[i];
                    ans=i;
                }
            }
        }
        return ans;
    }
};