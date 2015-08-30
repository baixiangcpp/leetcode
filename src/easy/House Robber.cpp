class Solution {
public:
    int rob(vector<int>& nums) {
        if(!nums.size())
            return 0;
        vector<int> dp(nums);
        for(int i=0;i<nums.size();++i)
        {
            if(i == 0)
                dp[i] = nums[i];
            else if(i == 1)
                dp[i] = max(nums[0],nums[1]);
            else
                dp[i] = max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp.back();
    }
};
/*class Solution {
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
};*/
