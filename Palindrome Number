class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x/10 == 0)
            return true;
        int base = 1;
        while( x/base >= 10 )
        {
            base *= 10;
        }
        while(x)
        {
            if(x%10 != x/base)
                return false;
            x -= x/base*base;
            x /= 10;
            base /= 100;
        }
        return true;
    }
};
