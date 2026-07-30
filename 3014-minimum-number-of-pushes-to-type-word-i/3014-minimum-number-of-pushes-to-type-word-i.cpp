class Solution {
public:
    int minimumPushes(string word) {
        int l=word.length();
        int n=l/8;
        int left=l%8*(n+1);
        int tot=(n*(n+1))/2;
        return 8*tot+left;

    }
};


