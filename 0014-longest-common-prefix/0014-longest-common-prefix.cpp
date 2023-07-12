class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string prefix = "";
        bool flag = 1; //["a"]
        for(int j=0; j<strs[0].length(); j++)
        {
            for(int i=1; i<strs.size(); i++)
            {
                if(strs[0][j] != strs[i][j])
                {
                    flag = 0;
                    break;
                }
                flag = 1;
            }
            if(flag) prefix += strs[0][j];
            else return prefix;
        }
        return prefix;   
    }
};