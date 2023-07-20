class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asts) 
    {
        bool destroy;
        vector<int> res;
        for(int ast : asts)
        {
            destroy = false;
            while(res.size() && res.back() > 0 && ast < 0 && !destroy)
            {
                if(res.back() > abs(ast)) 
                    destroy = true;
                else if(res.back() < abs(ast))
                    res.pop_back();
                else
                {
                    destroy = true;
                    res.pop_back();
                }
            }
            if(destroy == false) 
                res.push_back(ast);
        }
        return res;
    }
};