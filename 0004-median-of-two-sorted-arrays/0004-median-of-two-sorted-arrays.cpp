class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        int n=nums1.size(),m=nums2.size();
        int l=0,i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                a.push_back(nums1[i++]);
            }
            else{
                a.push_back(nums2[j++]);
            }
        }
        while(i<n){
            a.push_back(nums1[i++]);
        }
        while(j<m){
            a.push_back(nums2[j++]);
        }
        int s=a.size();
        if(s%2!=0){
            return a[s/2];
        }
        else{
            int x=s/2;
            return (a[x]+a[x-1])/2.0;
        }
    }
};