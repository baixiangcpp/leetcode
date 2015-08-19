class Solution {
public:
    int addDigits(int num) {
        return (num-1)%9 +1;//wiki :digital root
    }
};
