class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
        int s=0,e=arr.size()-1;
        int mid;
        while (s<=e){
             mid=(e+s)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(k<arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        }
        return mid+1;
    }
};