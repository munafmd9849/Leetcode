class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
        int s=0,e=arr.size()-1,ans=arr.size();
        while (s<=e){
            int mid=(e+s)/2;
            if(arr[mid]==k){
                return mid;
            }
            if(k<arr[mid]){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        }
        return ans;
    }
};