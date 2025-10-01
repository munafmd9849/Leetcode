class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(char i:s){
            if(st.size()>0 && st.top()==i){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        string ans="";
        while(st.size()>0){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};