class Solution {
public:
    int climbStairs(int n) {
        int pre = 1;
        int cur = 2;
        for(int i=3;i<=n;++i)
        {
            int rtn = pre+cur;
            pre = cur;
            cur  = rtn;
        }
        return cur;
    }
};
