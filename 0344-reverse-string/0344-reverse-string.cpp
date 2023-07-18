class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int n = s.size(), i, j, tmp;
        for(i=0; i<n/2; i++)
        {
            j = n - i - 1;
            // printf("s[%d] = %c\n", i, s[i]);
            // printf("s[%d] = %c\n", j, s[j]);
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp; 
            // printf("s[%d] = %c\n", i, s[i]);
            // printf("s[%d] = %c\n", j, s[j]);
            // printf("--------\n");
        }
    }
};
