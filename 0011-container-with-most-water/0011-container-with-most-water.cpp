class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int L = 0, R = height.size() - 1;
        int water, max_water = 0;
        while(L < R)
        {
            water = min(height[L], height[R]) * (R - L);
            max_water = max(water, max_water);
            if(height[L] > height[R])
                R--;
            else
                L++;
        }
        return max_water;
    }
};