class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        if(n==0){
            return 1;
        }
        while(m!=0){
            mask = (mask << 1) | 1; // ex m = 5 which is 101 so this line changes to 111 (in sort it counts total bits like for 5 101 the 111 like that)
            m = m >> 1; // left iteration 101 becones 10 then 1
        }
        int ans = (~n) & mask; /*~n     = 11111111 11111111 11111111 11111010
                                 mask   = 00000000 00000000 00000000 00000111
                                -----------------------------------
                                result = 00000000 00000000 00000000 00000010*/
        return ans; // if do directlt ~n then it will chnage all priour bits also and than will be a issue so we use mask to just convert the needed bits
    }
};