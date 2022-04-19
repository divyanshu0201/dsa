class Solution
{
	public:
	    vector<string> ans;
	    void swap(char *x, char *y)
        {
            char temp;
            temp = *x;
            *x = *y;
            *y = temp;
        }
	    void permute(string s,int l,int r){
	        if(l==r){
	            ans.push_back(s);
	        }
	        else{
    	        for(int i=l;i<=r;i++){
    	            swap(&s[l],&s[i]);
    	            permute(s,l+1,r);
    	            swap(&s[l],&s[i]);
    	        }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    permute(S,0,S.length()-1);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
