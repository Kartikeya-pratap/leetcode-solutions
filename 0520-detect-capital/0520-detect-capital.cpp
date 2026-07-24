class Solution {
public:
    bool detectCapitalUse(string word) {
        int k = 0;
        for(int i = 0; i < word.size(); i++){
            if(isupper(word[i])){
                k++;
            }
        }return k==word.size() || isupper(word[0]) && k == 1 || k == 0;
    }
};