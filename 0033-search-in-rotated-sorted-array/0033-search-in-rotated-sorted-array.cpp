class Solution {
public:
    int search(vector<int>& arr, int target) {
        int s=0,e=arr.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==target){
                return mid;
            }
            if(arr[0]<=arr[mid]){
                if(arr[0]<=target && arr[mid]>=target){
                    e=mid-1;
                }
                else{
                   s=mid+1; 
                }
            }
            else{
                if(arr[mid]<=target && arr[arr.size()-1]>=target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            
        }
        return -1;
    }
};