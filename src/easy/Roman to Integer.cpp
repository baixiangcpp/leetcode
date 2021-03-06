//I   V   X   L    C    D    M
//1   5   10  50  100  500  1000
class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        map<char,int> roman;
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(i==s.length()-1)
            {
                result=roman[s[i]];
                continue;
            }
            if(roman[s[i]] >= roman[s[i+1]])
                result += roman[s[i]];
            else
                result -= roman[s[i]];
        }
        return result;
    }
};
