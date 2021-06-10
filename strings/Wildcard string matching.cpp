class Solution{
    public:
    bool recursion(string wild, int it1, int len1, string pattern, int it2, int len2)
    {
        if(it1 == len1 && it2 == len2)
        return true;
        
        if(wild[it1] == '*'){
            while(it1+1 < len1 && wild[it1+1] == '*')
            it1++;
        }
        
        if(wild[it1] == '*' && it1+1 != len1 && it2 == len2)
        return false;
        
        if(wild[it1] == '?' || wild[it1] == pattern[it2])
        return recursion(wild, it1+1, len1, pattern, it2+1, len2);
        
        if(wild[it1] == '*')
        return recursion(wild, it1, len1, pattern, it2+1, len2) 
                || recursion(wild, it1+1, len1, pattern, it2, len2);
                
        return false;
    }
    
    bool match(string wild, string pattern)
    {
        int len1 = wild.size();
        int len2 = pattern.size();
        bool flag = recursion(wild, 0, len1, pattern, 0, len2);
        return flag;
    }
};
