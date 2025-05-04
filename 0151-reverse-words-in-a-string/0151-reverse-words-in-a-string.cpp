class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        
        
        reverse(s.begin(), s.end());
        
        
        int start = 0;
        for (int end = 0; end <= n; end++) {
            if (end == n || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);  
                start = end + 1;  
            }
        }
        
        
        int left = 0, right = n - 1;
        while (left <= right && s[left] == ' ') left++;
        while (left <= right && s[right] == ' ') right--;
        
        string result = "";
        while (left <= right) {
            if (s[left] != ' ') {
                result += s[left];
            } else {
                if (result.back() != ' ') {
                    result += ' ';
                }
            }
            left++;
    }
    return result;
}
};