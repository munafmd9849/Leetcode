class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>a(bank.size());
        for(int i=0;i<bank.size();i++){
            int c=0;
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1'){
                    c++;
                }
            }
            a[i]=c;
        }
        int sum=0;
        int first=0;
        for(int i=0;i<bank.size();i++){
            if(a[i]!=0){
                sum+=a[i]*first;
                first=a[i];
            }
        }
        return sum;
    }
};