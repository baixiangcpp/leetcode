class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
			return false;
		int rank = 0;
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		while (rank < t.size())
		{
			if (s[rank] != t[rank])
				return false;
			rank++;
		}
		return true;
	}
};