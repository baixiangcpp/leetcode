class Solution {
    set<int> st;
public:
    bool isHappy(int n) {
        if(n<=0)
            return false;
        int num=0;
        while(n)
        {
            num += (n%10)*(n%10);
            n /= 10;
        }
        if(num==1)
            return true;
        pair<set<int>::iterator,bool> pr; 
        pr = st.insert(num);
        if(!pr.second)
            return false;
        return isHappy(num);
    }
};
