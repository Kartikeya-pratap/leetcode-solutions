class Solution {
public:
    bool checkString(string s) {
        int a = s.length();
        for(int i = 0; i<a;i++){
            
            if(s[i]=='b'){
                if(s[i+1]=='a') return false;
            }
        }
        return true;
    }
};