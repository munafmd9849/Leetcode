class Solution {
public:
    int merge(vector<int>& nums, vector<int>& a, vector<int>& b){
        int p=0,q=0,count=0;
        while(p<a.size() && q<b.size()){
            if(a[p]/2.0 > b[q]) count+=a.size()-p,q++;
            else p++;
        }
        int i=0,j=0,k=0;
        while(i<a.size() && j<b.size()){
            if(a[i] <= b[j]) nums[k++]=a[i++];
            else nums[k++]=b[j++];
        }
        while(i<a.size()) nums[k++]=a[i++];
        while(j<b.size()) nums[k++]=b[j++];
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int n1=n/2, n2=n-n/2;
        vector<int> a(n1), b(n2);
        for(int i=0;i<n1;i++) a[i]=nums[i];
        for(int i=0;i<n2;i++) b[i]=nums[n1+i];
        int count=reversePairs(a)+reversePairs(b);
        return count+merge(nums,a,b);
    }
};