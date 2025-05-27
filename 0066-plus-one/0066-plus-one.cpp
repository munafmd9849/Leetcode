class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int n=a.size();
        if(a[n-1]<9){
            a[n-1]++;
            return a;
        }
        else{
            int c=0;
            for(int i=n-1;i>=0;i--){
                if(i==0 && a[0]==9){
                    a[0]=1;
                    a.push_back(0);
                    return a;
                }
                if(a[i]==9){
                    a[i]=0;
                    c=1;
                }
                else{
                    a[i]+=c;
                    return a;
                }

            }
        }
        return a;

    }
};