class MedianFinder {
public:
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxHeap.size()==0 || num<=maxHeap.top()){
            maxHeap.push(num);
        }else{
            minHeap.push(num);
        }
        int d=maxHeap.size()-minHeap.size();
        if(d==2){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if(d==-1){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        int d=maxHeap.size()-minHeap.size();
        if(d==0){
            return (maxHeap.top()+minHeap.top())/2.0;
        }else{
            return maxHeap.top()*1.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */