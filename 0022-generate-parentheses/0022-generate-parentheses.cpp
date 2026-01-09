class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        function(0,0,n,s,ans);
        return ans;
    }
    void function(int No,int Nc,int n,string & s,vector<string>&ans){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }

        if(No<n){
            s.push_back('(');
            function(No+1,Nc,n,s,ans);
            s.pop_back();
            
        }
        if(Nc<No){
            s.push_back(')');
            function(No,Nc+1,n,s,ans);
            s.pop_back();
            
        }
        return ;

    }
};