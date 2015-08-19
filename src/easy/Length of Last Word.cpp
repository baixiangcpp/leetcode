class Solution {
public:
    int lengthOfLastWord(string s) {
        while(!s.empty())
        {
            if(s.rfind(' ') == string::npos)
                return s.size();
            else if(s.rfind(' ') != s.size()-1 )
                return s.substr(s.rfind(' '),s.size()-s.rfind(' ')-1).size();
            else
                s = s.substr(0,s.size()-1);//like this "a "
        }
        return 0;
    }
};
