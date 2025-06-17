class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int ,int > frq;
        for(int i:nums){
            frq[i]++;
        }
        for(int i:nums){
            if(frq[i]==1){
                sum+=i;
            }
        }
        return sum;
    }
};