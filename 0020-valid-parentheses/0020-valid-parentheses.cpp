class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='}' || s[i]==']' || s[i]==')'){
                if(st.size()>0){
                    if((s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[') ||
                        (s[i]==')' && st.top()=='(') ){
                                st.pop();
                            
                    } 
                }  
                else{
                    st.push(s[i]);
                }   
            }
            else{
                st.push(s[i]);
            }
        }
        return !st.size();
    }
};