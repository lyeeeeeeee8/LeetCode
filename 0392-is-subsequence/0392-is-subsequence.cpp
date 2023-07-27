class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if(s == t) return true;
        int i = 0, j = 0;
        for(i=0; i<t.size(); i++)
        {
            if(s[j] == t[i])
            {
                // cout << s[j] << " " << t[i] << endl;
                j++;
            }
            if(j >= s.size())
                return true;
        }
        return false;
    }
};