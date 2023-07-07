class Solution {
public:
    int romanToInt(string s) 
    {
        int tmp, sum = 0;
        map<char,int> dict = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        for(int i=0; i<s.size(); i++)
        {
            if(dict[s[i]] < dict[s[i+1]] && i <= s.size() - 2)
                sum -= dict[s[i]];
            else
                sum += dict[s[i]];
        }
        return sum;
    }
};