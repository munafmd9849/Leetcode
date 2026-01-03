class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap(stones.begin(),stones.end());

        while(maxHeap.size()>1){
            int x=maxHeap.top();
            maxHeap.pop();
            int y=maxHeap.top();
            maxHeap.pop();
            if(x==y){
                continue;
            }
            else{
                if(y<x){
                    swap(x,y);
                }
                maxHeap.push(y-x);
            }

        }
        return maxHeap.size()>0?maxHeap.top():0;
    }
};