class Solution {
public:
    bool buddyStrings(string s, string goal) 
    {
        vector<char> s_diff, goal_diff;
        vector<int> letter(26, 0);
        int diffidx1 = -1, diffidx2 = -1;
        unordered_set<char> s_letters;

        if(s.length() != goal.length()) return false;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != goal[i])
            {
                if(diffidx1 == -1) diffidx1 = i;
                else if(diffidx2 == -1) diffidx2 = i;
                else return false;
            }
            s_letters.insert(s[i]);
        }
        if(diffidx1 != -1 && diffidx2 != -1)
            return (s[diffidx1] == goal[diffidx2] && s[diffidx2] == goal[diffidx1]);
        if(diffidx1 != -1) 
            return false;
        return s_letters.size() < s.size();
    }
};