class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int sum=0,indexsum=0,c=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            indexsum+=i;
            if(sum==indexsum)
                c++;
            
        }
        return c;
    }
};