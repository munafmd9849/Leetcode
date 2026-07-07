class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        long long ans=0;
        int sum=0;
        for(char c:s){
            if(c!='0'){
                sum+=(c-'0');
                ans+=(c-'0');
                ans*=10;
            }
        }
        ans/=10;
        ans*=sum;
        return ans;

    }
};