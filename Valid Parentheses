class Solution {
private:
    stack<char> stk;
public:
    bool isValid(string s) {
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='(' || s[i]=='[' || s[i] == '{')
                stk.push(s[i]);
            switch(s[i])
            {
                case ')':{ 
                            if(stk.empty())
                                return false;
                            if(stk.top() == '(')
                                stk.pop();
                            else
                                return false;
                            break;
                         }
                case ']':{ 
                            if(stk.empty())
                                return false;
                            if(stk.top() == '[')
                                stk.pop();
                            else
                                return false;
                            break;
                         }
                case '}':{ 
                            if(stk.empty())
                                return false;
                            if(stk.top() == '{')
                                stk.pop();
                            else
                                return false;
                            break;
                         }
                default:break;
            }
        }
        if(stk.empty())
            return true;
        return false;
    }
};
