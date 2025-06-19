class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int ,int> um;
        long long sum=0;
        long long ans=0;
        for(int i=0;i<k;i++){
            um[arr[i]]++;
            sum+=arr[i];
        }
        if(um.size()==k){
            ans=sum;
        }
        int s=0,e=k;
        while(e<n){
            um[arr[s]]--;
            um[arr[e]]++;

            sum-=arr[s];
            sum+=arr[e];
            
            if(um[arr[s]]==0){
                um.erase(arr[s]);
            }
            
            if(um.size()==k){
                ans=max(ans,sum);
            }
            s++;e++;
        }
        return ans;
    }
};