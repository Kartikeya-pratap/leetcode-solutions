class Solution {
public:
    bool isPalindrome(string s) {
        string o;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                o+=tolower(s[i]);
            }
        }
        string rev = o;
        reverse(rev.begin(), rev.end());
        return o == rev; 
        
    }

};