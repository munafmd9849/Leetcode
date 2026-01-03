class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string> ans(n);
        priority_queue<int> maxHeap(score.begin(),score.end());
        for(int i=1;i<=n;i++){
            int x=maxHeap.top();
            maxHeap.pop();
            for(int j=0;j<n;j++){
                if(score[j]==x){
                    if(i==1){
                        ans[j]="Gold Medal";
                    }
                    else if(i==2){
                        ans[j]="Silver Medal";

                    }
                    else if(i==3){
                        ans[j]="Bronze Medal";
                    }
                    else{
                        ans[j]=to_string(i);
                    }
                }
            }
        }
        return ans;

    }
};