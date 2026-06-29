class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(string s:patterns){
            if(word.contains(s)){
                c++;
            }
        }

        return c;
    }
};