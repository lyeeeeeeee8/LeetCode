class Solution {
public:
    int trap(vector<int>& height) 
    {
        int tallest = 0, tall, res = 0, i;
        for(int i=0; i<height.size(); i++)
            if(height[i] > height[tallest]) 
                tallest = i;
        for(i=0,tall=0; i<tallest; i++)
        {
            if(height[i] > tall) 
                tall = height[i];
            else
                res += tall - height[i];
        }
        for(i=height.size()-1,tall=0; i>tallest; i--)
        {
            if(height[i] > tall) 
                tall = height[i];
            else
                res += tall - height[i];
        }
        return res;
    }
};