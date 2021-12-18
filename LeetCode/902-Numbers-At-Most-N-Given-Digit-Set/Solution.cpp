/** PROBLEM LINK :: https://leetcode.com/problems/numbers-at-most-n-given-digit-set/

class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        int s = digits.size();
        string upperLimit = to_string(n);
        int digit = upperLimit.size() ;
        int Res = 0;
        for(int i=1;i<digit;++i)
        {
            Res += pow(s,i);
        }
        for(int i = 0; i < digit; ++i)
        {
            bool startingSameNum = false;
            for(string &d :digits){
                if(d[0] < upperLimit[i])
                {
                    Res += pow(s,digit -i - 1);
                }
                else if(d[0]==upperLimit[i])
                {
                    startingSameNum = true;
                }
            }
            if(startingSameNum == false) return Res;
        }
        
        return Res+1;
    }
};
