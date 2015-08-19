class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> m;
		pair<set<int>::iterator,bool> p;
		
        for(auto it = nums.begin();it!=nums.end();++it)
		{
			p = m.insert(*it);
			if(!p.second)
				return true;
		}
		return false;
    }
};
