class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0;
        int col = cols - 1;
        int cur;
        while(row < rows && col >= 0)
        {
            cur = matrix[row][col];
            if(target == cur)
                return true;
            else if(target > cur)
                row++;
            else
                col--;
        }
        return false;
    }
};