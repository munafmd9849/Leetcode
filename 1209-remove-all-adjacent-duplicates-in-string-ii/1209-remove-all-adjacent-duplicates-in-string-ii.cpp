class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        for(char i:s){
            if(st.size()==0 || st.top().first!=i){
                st.push({i,1});
            }
            else{
                if(st.top().second==k-1){
                    st.pop();
                }
                else{
                    pair<char,int> temp={st.top().first,st.top().second+1};
                    st.pop();
                    st.push(temp);
                }
            }
        }
        cout<<"this is the point";
        string s2="";
        while(st.size()>0){
            s2.append(st.top().second,st.top().first);
            st.pop();
        }
        reverse(s2.begin(),s2.end());
        return s2;
    }
};