class Solution {
public:
    bool isValid(string s)
    {
        if(s.size()>3)
        {
            return false;
        }
        if(s.size()==3 || s.size()==2)
        {
            if(s[0]=='0')
            {
                return false;
            }
            int num = stoi(s);
            if(num > 255)
                return false;
        }
        return true;
    }
    
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        if(s.size() > 12 || s.size() < 4)
        {
            return ans;
        }
        for(int i=1;i<s.size()-2;i++)
        {
            for(int j=i+1; j<s.size()-1; j++)
            {
                for(int k=j+1;k<s.size(); k++)
                {
                    string p1 = s.substr(0,i-0);
                    string p2 = s.substr(i,j-i);
                    string p3 = s.substr(j,k-j);
                    string p4 = s.substr(k,s.size()-k);
                    if(isValid(p1) && isValid(p2) && isValid(p3) && isValid(p4))
                    {
                        string tops = p1 + "." + p2 + "." + p3 + "." + p4;
                        ans.push_back(tops);
                    }
                }
            }
        }
        return ans;
    }
};
