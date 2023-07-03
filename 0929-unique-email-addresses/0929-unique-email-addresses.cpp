class Solution 
{
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        string email, raw_localName, domainName, localName, emailName;
        unordered_set<string> email_pool;
        for(int i=0; i<emails.size(); i++)
        {
            email = emails[i];
            // "@"
            size_t at_sign = email.find('@');
            raw_localName = email.substr(0, at_sign);
            domainName = email.substr(at_sign + 1);
            // "+"
            size_t plus_sign = raw_localName.find('+');
            if(plus_sign != string::npos)
                raw_localName = raw_localName.substr(0, plus_sign);
            // "."
            localName = "";
            for(char c : raw_localName)
                if(c != '.') localName += c;
            
            emailName = localName + " " + domainName;
            email_pool.insert(emailName);
        }
        return email_pool.size();
    }
};