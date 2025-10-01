class Solution {
public:
    int minOperations(vector<string>& logs) {
        int d=0;
        for(auto s : logs){
            if(s=="./"){
                continue;
            }
            if(s=="../"){
                if(d>0)d--;
            }
            else{
                d++;
            }

        }
        return d;
    }
};