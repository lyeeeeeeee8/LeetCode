class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        int i, j, cnt, n = citations.size();
        sort(citations.rbegin(), citations.rend());
        for(i=n; i>=1; i--) // h-index
        {
            cnt = 0;
            for(j=0; j<n; j++)
            {
                if(citations[j] >= i)
                    cnt++;
                else
                    break;
            }
            if(cnt >= i) return i;
        }
        return 0;
    }
};