class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        map<char,int> dict;
        char ch;
        for(char c : s)
            dict[c]++;
        for(char c : t)
            dict[c]--;
        for(auto it=dict.begin(); it!=dict.end(); it++)
            if(it->second != 0)
                ch = it->first;
        return ch;
    }
};