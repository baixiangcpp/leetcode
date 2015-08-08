class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = nums.size()/2;
		sort(nums.begin(),nums.end());
		auto it = nums.begin() + count;
		return *it;
    }
};