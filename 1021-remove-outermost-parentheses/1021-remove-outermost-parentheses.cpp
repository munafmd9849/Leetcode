class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans="";
        for(char i:s){
            if(st.size()==0){
                st.push(i);
                continue;
            }
            if(i=='('){
                ans+=i;
                st.push('(');
                
            }
            else{
                st.pop();
                if(st.size()>0){
                    ans+=')';
                }
            } 
        }
        return ans;
    }
};