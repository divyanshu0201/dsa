class Solution{
public:		

		
	int lps(string s)
	{
	    int len=0;
	    int n=s.length();
	    int i=1;
	    int lps[n];
	    lps[0]=0;
	    while(i<n){
	        if(s[i]==s[len]){
	            len++;
	            lps[i]=len;
	            i++;
	        }
	        else{
	            if(len!=0){
	                len=lps[len-1];
	            }
	            else{
	                lps[i]=0;
	                i++;
	            }
	        }
	    }
	    return lps[n-1];
	}
};
