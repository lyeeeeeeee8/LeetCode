class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int cnt;
        for(int i=0; i<haystack.size(); i++)
        {
            cnt = 0;
            if(haystack[i] == needle[0])
            {
                for(int j=0; j<needle.size(); j++)
                {
                    if(haystack[i+j] == needle[j])
                        cnt++;   
                    else
                        break;
                    if(cnt == needle.size())
                        return i;
                }
            }
        }
        return -1;
    }
};

        // int cnt = 0;
        // for(int i=0; i<haystack.size(); i++)
        // {
        //     if(haystack[i] == needle[cnt])
        //         cnt++;
        //     else
        //         cnt = 0;
        //     if(cnt == needle.size())
        //         return (i + 1) - needle.size();
        // }
        // return -1;