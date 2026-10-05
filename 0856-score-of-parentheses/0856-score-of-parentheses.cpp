class Solution {
public:
    int scoreOfParentheses(string s) {
        int count = 0;
        int a = 0;
        for(int i = 0; i<s.length();i++){
            
            if(s[i] == '('){
                a++;
            }
            else if (a && s[i] == ')') {
                a--;
                
                if (s[i - 1] == '(') {
                    count += pow(2, a);
                }
            }
        }

        return count;
        
    }
};