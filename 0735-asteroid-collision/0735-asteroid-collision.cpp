class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) 
    {
        bool collision = 1;
        int cnt = 0, size;
        if(ast.size() == 0) return ast;
        while(collision)
        {
            cnt = 0;
            for(int i=1; i<ast.size(); i++)
            {
                size = ast.size();
                if(ast[i-1] > 0 && ast[i] < 0) //colide
                {
                    if(abs(ast[i-1]) == abs(ast[i]))
                    {
                        ast.erase(ast.begin() + i);
                        ast.erase(ast.begin() + (i - 1));
                    }
                    else if(abs(ast[i-1]) > abs(ast[i]))
                        ast.erase(ast.begin() + i);
                    else
                        ast.erase(ast.begin() + (i - 1));
                }
                else
                    cnt++;
            }
            if(cnt == size - 1|| ast.size() == 0 || ast.size() == 1)
                collision = 0;
        }
        return ast;
    }
};