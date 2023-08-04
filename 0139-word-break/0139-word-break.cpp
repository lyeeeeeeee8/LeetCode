class Solution {
public:
    bool wordBreakhelp(unordered_map<string, bool>& memory, unordered_map<string, bool>& in_dict, string word)
    {
        string left, right;
        bool res;
        
        if(in_dict.find(word) != in_dict.end())
        {
            // word in in_dict
            return true;
        }
        if(memory.find(word) != memory.end())
        {
            // word in memory
            // directly return the result
            return memory[word];
        }

        for(int i=0; i<word.size(); i++)
        {
            left = word.substr(0, i+1);
            right = word.substr(i+1);
            if(in_dict.find(left) != in_dict.end())
            {
                res = wordBreakhelp(memory, in_dict, right);
                memory[left] = true;
                if(res == true)
                {                    
                    memory[right] = true;
                    memory[word] = true;
                    return true;
                }
                else
                {
                    memory[right] = false;
                }
            }
            else
            {
                memory[left] = false;
            }
        }
        memory[word] = false;
        return false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, bool> in_dict;
        unordered_map<string, bool> memory;
        for(int i=0; i<wordDict.size(); i++)
        {
            in_dict[wordDict[i]] = true;
        }
        return(wordBreakhelp(memory, in_dict, s));
    }
};