class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> v(rowIndex+1);
		v[0] = 1;
		v[rowIndex] = 1;
		for (int k = 1; k < rowIndex; k++)
		{
			v[k] = 1;//this is important here.don't forget this.
			for (int j = k; j>0; --j)
			{
				v[j] = v[j] + v[j - 1];
			}
		}
		return v;
	}
};