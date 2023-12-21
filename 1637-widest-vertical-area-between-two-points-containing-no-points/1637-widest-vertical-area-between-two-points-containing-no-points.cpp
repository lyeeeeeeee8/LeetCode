class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) 
    {
        vector<int> x_coors;
        for(auto point : points)
        {
            x_coors.push_back(point[0]);
        }
        sort(x_coors.begin(), x_coors.end());
        int diff, max = 0;
        for(int i=1; i<x_coors.size(); i++)
        {
            diff = x_coors[i] - x_coors[i-1];
            if(diff > max)
                max = diff;
        }
        return max;
    }
};