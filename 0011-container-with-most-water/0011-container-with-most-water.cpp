class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int L = 0, R = height.size() - 1;
        int h, max_water = 0;
        while(L < R)
        {
            h = min(height[L], height[R]);
            max_water = max(h * (R - L), max_water);
            while(height[L] <= h && L < R) L++;
            while(height[R] <= h && L < R) R--;
        }
        return max_water;
    }
};