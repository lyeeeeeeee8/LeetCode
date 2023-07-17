class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> res;
        map<string,int> dict;
        vector<string> tmp;
        string str, str_raw;
        for(int i=0; i<strs.size(); i++)
        {
            str = strs[i];
            str_raw = str;
            sort(str.begin(), str.end());
            if(dict.count(str) == 0)
            {
                dict[str] = dict.size();   
                tmp.push_back(str_raw);
                res.push_back(tmp);
                tmp.clear();
            }
            else 
            {
                res[dict[str]].push_back(str_raw);
            }   
        }
        return res;
    }
};