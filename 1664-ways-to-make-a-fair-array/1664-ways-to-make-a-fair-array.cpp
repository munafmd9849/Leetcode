class Solution {
public:
    int waysToMakeFair(vector<int>& arr) {
        int n=arr.size();
        vector<int> evenSum(n, 0); // initialize with size n
        vector<int> oddSum(n, 0);

        int evenSums=0;
        int oddSums=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                evenSums+=arr[i];
            }
            else{
                oddSums+=arr[i];
            }
            evenSum[i]=evenSums;
            oddSum[i]=oddSums;
        }
        
        for(int i=0;i<n;i++){
            
            int evenSum1=evenSums;
            int oddSum1=oddSums;
            if(i==0){
                evenSum1=evenSum1-arr[i];
                swap(evenSum1,oddSum1);
                if(evenSum1==oddSum1){
                    count++;
                }
            }
            else{

            if(i%2==0){
                evenSum1=evenSum1-arr[i]-evenSum[i-1];
                oddSum1=oddSum1-oddSum[i-1];
                swap(evenSum1,oddSum1);
                evenSum1+=evenSum[i-1];
                oddSum1+=oddSum[i-1];
                if(evenSum1==oddSum1){
                    count++;
                }
            }
            else{
                evenSum1=evenSum1-evenSum[i-1];
                oddSum1=oddSum1-arr[i]-oddSum[i-1];
                swap(evenSum1,oddSum1);
                evenSum1+=evenSum[i-1];
                oddSum1+=oddSum[i-1];   
                if(evenSum1==oddSum1){
                    count++;
                }
            }
            }
        }
        return count;
        
    }
};