class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length()) return false;
        map<char,int> dict;
        for(int i=0; i<s.size(); i++)
        {
            dict[s[i]]++;
            dict[t[i]]--;
        }
        for(auto it=dict.begin(); it!=dict.end(); it++)
            if(it->second) return false;
        return true;
    }
};