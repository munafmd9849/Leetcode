class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        int mod=1e9+7;
        vector<long long> freq(26,0);
        for(int i=0;i<s.length();i++){
            freq[s[i]-97]++;
        }

        for(int i=0;i<t;i++){
            vector<long long> freq2(26,0);
            for(int j=0;j<26;j++){
                if(j==25){
                    freq2[0]=(freq2[0]+freq[25])%mod;
                    freq2[1]=(freq2[1]+freq[25])%mod;
                }
                else{
                    freq2[j+1]=(freq2[j+1]+freq[j])%mod;
                }
            }
            freq=freq2;
        }
        long long total=0;
        for(int i=0;i<26;i++){
            total=(total+freq[i])%mod;
        }
        return static_cast<int> (total);
    }
};