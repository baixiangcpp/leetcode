class Solution {
public:
    int rob(vector<int>& nums) {//dynamic programming
        int left = 0;
        int right =0;
        for(int i=0;i<nums.size();++i)
        {
            int tmp = left;
            left = max(left,right);
            right = tmp + nums[i];
        }
        return max(left,right);
    }
};
