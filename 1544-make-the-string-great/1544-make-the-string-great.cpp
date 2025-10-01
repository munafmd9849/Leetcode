class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string ans="";
        for(char i:s){
            if(st.size()>0 && st.top()==(i>=97?i-32:i+32)){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        while(st.size()>0){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};