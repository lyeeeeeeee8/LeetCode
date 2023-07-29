class Solution {
public:
    string simplifyPath(string path) 
    {
        stack<string> st;
        string tmp, res = "";
        for(int i=0; i<path.size(); i++)
        {
            tmp = "";
            if(path[i] == '/') 
                continue;
            while(i < path.size() && path[i] != '/')
            {
                tmp += path[i];
                i++;
            }
            if(tmp == ".") 
                continue;
            else if(tmp == "..")
            {
                if(!st.empty())
                    st.pop();
            }
            else    
                st.push(tmp);
        }
        while(!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }
        if(res == "")
            res = "/";
        return res;
    }
};