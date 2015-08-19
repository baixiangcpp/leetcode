class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> m;
		pair<map<int,int>::iterator,bool> p;
		for(int i=0;i<nums.size();i++)
		{
			p = m.insert(pair<int,int>(nums[i],i));
			if(!p.second){
				if(i-m[nums[i]]> k)
					m[nums[i]]=i; //this  is important
				else
					return true;
			}
		}
		return false;
    }
};
