class Solution {
public:
    string reverseWords(string s) 
    {
        string tmp = "", res = "";
        char ch;
        for(char ch : s)
        {
            if(ch == ' ')
            {
                if(tmp != "")
                    res = tmp + " " + res;
                tmp = "";
            }
            else
                tmp += ch;
        }
        if(tmp != "") 
            res = tmp + " " + res;
        res.pop_back();
        return res;
    }
};