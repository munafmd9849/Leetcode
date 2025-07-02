class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ms(m+n);
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                ms[k++]=nums1[i++];
            }
            else{
                ms[k++]=nums2[j++];
            }
        }
        while(i<m){
            ms[k++]=nums1[i++];
        }
        while(j<n){
            ms[k++]=nums2[j++];
        }
        nums1=ms;

    }
};