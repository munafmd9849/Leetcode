class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> p1(n,-1);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(st.size()>0 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.size()>0){
                p1[i]=st.top();
            }
            st.push(i);
        }
        
        vector<int> p2(n,n);
        stack<int> st2;
        for(int i=n-1;i>=0;i--){
            while(st2.size()>0 && arr[st2.top()]>arr[i]){
                st2.pop();
            }
            if(st2.size()>0){
                p2[i]=st2.top();
            }
            st2.push(i);
        }
        
        int s=0;
        for(int i=0;i<n;i++){
            s+=(arr[i]*(p2[i]-i)*(i-p1[i]));
        }
        
        return s;
    }
    
};