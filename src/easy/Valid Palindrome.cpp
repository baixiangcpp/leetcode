class Solution {
public:
    string trim(string s)
    {
        string tmp;
        for(int i=0;i<s.size();++i)
            if( (s[i]>='0' && s[i] <= '9')  || (s[i]>='a' && s[i] <= 'z') || (s[i]>='A' && s[i] <= 'Z'))
                tmp.push_back(s[i]);
        return tmp;
    }
    bool isPalindrome(string s) {
        if(s.empty())
            return true;
        s = trim(s);
        for(int i=0,j=s.size()-1;i<s.size();++i,--j)
            if( (s[i] + 32 == s[j]) || (s[i] - 32 == s[j]) || (s[i] == s[j]))
                continue;
            else
                return false;
        return true;
    }
};
