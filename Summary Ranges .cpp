class Solution {//��Ҫ�������
public:
	vector<string> summaryRanges(vector<int>& nums) {
	    if (nums.empty())
			return vector<string>();
		vector<string> v;
		ostringstream oss;
		auto pre = nums.begin();
		auto back = pre + 1;
		int i = 1;
		while (back != nums.end())
		{
			if (*pre == *back - i)
			{
				oss.str("");
				oss << *pre << "->" << *back;
				++back;
				++i;
			}
			else if (back-pre != 1)//ǰ��һ����������
			{
				v.push_back(oss.str());
				oss.str("");
				pre = back;
				i = 1;
				++back;
			}
			else
			{
				oss << *pre;
				v.push_back(oss.str());
				oss.str("");
				pre = back;
				i = 1;
				++back;
			}
		}
		if (i == 1)
			oss << *pre;//��һ�β��������ģ����Ǹ�������ֵ��ӡ����
		v.push_back(oss.str());
		return v;
	}
};