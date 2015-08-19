class Solution {
public:
    //string version may contain more than one '.'
    //so a vector is a good choice
    vector<int> splitAndTrim(string version)
    {
        vector<int> v;
        while(version.find('.') != string::npos)
        {
            v.push_back(stoi(version.substr(0,version.find('.'))));
            version = version.substr(version.find('.')+1,version.size()-version.find('.')-1);
        }
        v.push_back(stoi(version));
        while(v.back()==0)
            v.pop_back();
        return v;
    }

    int compareVersion(string version1, string version2) {
        vector<int> v1 = splitAndTrim(version1);
        vector<int> v2 = splitAndTrim(version2);
        for(int i = 0;i<( v1.size()>v2.size()?v1.size():v2.size());++i)
        {
            if(v1.size() < i+1)
                return -1;
            if(v2.size() < i+1)
                return 1;
            if(v1[i] > v2[i])
                return 1;
            else if(v1[i] < v2[i])
                return -1;
            
        }
        return 0;
    }
};
