class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    int median;
		    int n=v.size();
		    sort(v.begin(),v.end());
		    if(v.size()%2==0)
		    {
		        median=(v[(n-1)/2]+v[n/2])/2;
		    }
		    else
		    {
		        return v[n/2];
		    }
		}
};
