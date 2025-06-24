class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> blackbox ( right+ 1, 1);
        int sqright=sqrt(right);
        blackbox[0]=0;
        blackbox[1]=0;
        
        for ( int i =2; i<=sqright;i++){
            if (blackbox[i]==1){
                for (int j =i*i; j<=right;j=j+i){
                    blackbox[j]=0;

                }
            }
        }
        vector<int> primes;
        for (int i =left ; i<= right;i++){
            if (blackbox[i]==1){
                primes.push_back(i);
            }
        }
        if (primes.size()<2) return {-1,-1};
        vector<int> ans;
        int mindiff=INT_MAX;
        for (int i=0;i< primes.size()-1;i++){
            int diff= primes[i+1]-primes[i];
            if (mindiff> diff){
                mindiff=diff;
              while (ans.size()>0){
                ans.pop_back();
              }
                ans.push_back(primes[i]);
                ans.push_back(primes[i+1]);


            }
           

        }
        return ans;
        
    }
};