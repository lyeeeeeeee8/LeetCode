class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        vector<string> words;
        stringstream input(s);
        string word;
        while(input >> word)
            words.push_back(word);
        return word.length();
    }
};