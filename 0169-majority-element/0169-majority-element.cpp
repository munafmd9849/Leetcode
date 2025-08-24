class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int elem=INT_MIN,f=0;
        for(int i=0;i<n;i++){
            if(f==0){
                elem=arr[i];
                f=1;
            }
            else if(arr[i]==elem){
                f++;

            }
            else{
                f--;
            }
        }
        // int c=0;
        // for(int i:arr){
        //     if(elem==arr[i]){
        //         c++;
        //     }
        // }
        return elem;
    }
};