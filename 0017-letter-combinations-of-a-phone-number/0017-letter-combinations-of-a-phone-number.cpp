class Solution {
public:
    vector<string> res;
    void helper(int idx, map<char,string> dict, string digits, string current)
    {
        //base case
        if(current.size() == digits.size())
        {
            res.push_back(current);
            return;
        }
        string value = dict[digits[idx]];
        for(int i=0; i<value.size(); i++)
        {
            current.push_back(value[i]);
            helper(idx+1, dict, digits, current);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        if(digits == "") return {};
        map<char,string> dict = {{'2',"abc"}, {'3',"def"}, {'4',"ghi"},
                                 {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"},
                                 {'8',"tuv"}, {'9',"wxyz"}};
        string current;
        helper(0, dict, digits, current);
        return res;
    }
};

