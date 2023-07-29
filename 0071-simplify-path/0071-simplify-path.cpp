class Solution {
public:
    string simplifyPath(string path) 
    {
        stack<string> st;
        stringstream ss(path);
        string tmp, res;
        while(getline(ss, tmp, '/'))
        {
            if(tmp == "" || tmp == ".") continue;
            if(tmp == "..") 
            {
                if(!st.empty()) st.pop();
                else continue;
            }
            else st.push(tmp);
        }
        while(!st.empty())
        {
            res = st.top() + "/" + res;
            st.pop();
        }
        res = "/" + res;
        if(res != "/")
            res.erase(res.begin() + res.size() - 1);
        return res;
    }
};