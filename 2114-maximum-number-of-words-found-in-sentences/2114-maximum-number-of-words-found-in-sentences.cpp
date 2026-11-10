class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        int a = 0;
        for(int i = 0;i<sentences.size();i++){
            for(int j = 0;j<sentences[i].length();j++){
                if(sentences[i][j]==' ') count++;
            }
            a = max(a,count);
            count = 0;
        }
        return a+1;
    }
};