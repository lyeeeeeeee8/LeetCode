class Solution {
public:
    bool isPalindrome(string s) 
    {
        string word = "", word_reverse;
        for(char ch : s)
            if(isalnum(ch)) word += tolower(ch);
        word_reverse = word;
        reverse(word_reverse.begin(), word_reverse.end());
        return (word == word_reverse);
    }
};