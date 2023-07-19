class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        int H, n = citations.size();
        sort(citations.rbegin(), citations.rend());
        for(H=0; H<n; H++) // h-index
        {
            if(H >= citations[H]) 
                break;
        }
        return H;
    }
};