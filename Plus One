class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v(digits);
        vector<int> tmp(v.size()+1);
        bool carry = false;//carry bit
        v[v.size()-1]++;
        for(int i=v.size()-1;i>=0;--i)
        {
            if(carry) {
                ++v[i];
                carry = false;
            }
            if(v[i] > 9){
                v[i] -= 10;
                carry = true;
            }
        }
        if(carry)
        {
            for(int i=1;i<v.size();++i)
                tmp[i] = v[i-1];
            v = tmp;
            v[0]++;
        }
        return v;
    }
};
