class Solution {
public:
    int reverseDegree(string s) {
        int out = 0;
        for(int i = 0; i<s.length();i++){
            int n = s[i]-'a';
            out+=((26-n)*(i+1));
        }
        return out;
    }
};