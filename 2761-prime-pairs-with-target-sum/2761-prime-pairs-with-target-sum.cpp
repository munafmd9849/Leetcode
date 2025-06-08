class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<vector<int>> result;
        for (int i = 2; i <= n / 2; ++i) {
            if (isPrime[i] && isPrime[n - i]) {
                result.push_back({i, n - i});
            }
        }

        return result;
    }
};



// class Solution {
// public:
//     vector<vector<int>> findPrimePairs(int n) {
//         vector<bool> a(n+1,true);
//         for(int i=2;i<=n;i++){
//             if(a[i]){
//                 for(int j=2;j*i<=n;++j){
//                     a[i*j]=false;
//                 }
//             }
//         }
//         vector<int> b;
//         for(int i=2;i<=n;i++){
//             if(a[i]){
//                 b.push_back(i);
//             }
//         }
//         vector<vector<int>> c;
//         for(int i=0;i<b.size();i++){
//             for(int j=i;j<b.size();j++){
//                 if(b[i]+b[j]==n){
//                     vector<int> t(2);
//                     t[0]=b[i];
//                     t[1]=b[j];
//                     c.push_back(t);

//                 }
//             }
//         }

//         return c;
//     }
// };