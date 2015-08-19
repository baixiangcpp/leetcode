class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";

        // find shortest string s1
        string s1 = strs[0];
        int length = strs[0].length();
        for(int i=0;i<strs.size();++i)
        {
            if(strs[i].length() < length) {
                length = strs[i].length();
                s1 = strs[i];
            }
        }

        int min=s1.length();
        int j =0;
        for(int i=0;i<strs.size();++i){
            for(j =0;j< s1.size();++j)
            {
                if(s1[j] != strs[i][j]){
                    min = min<j?min:j;
                    break;
                }
            }
        }
        return s1.substr(0,min);
    }
};
