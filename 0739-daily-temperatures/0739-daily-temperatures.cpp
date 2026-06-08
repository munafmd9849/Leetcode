class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tem) {
        int n=tem.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(n-1);
        ans[n-1]=0;
        for (int i=n-2;i>=0;i--){

            while(st.size()>0 && tem[st.top()]<=tem[i]){
                st.pop();
            }
            if(st.size()>0){
                ans[i]=st.top()-i;
            }
            else{
                ans[i]=0;
            }
            st.push(i);
        }
        return ans;
    }
};