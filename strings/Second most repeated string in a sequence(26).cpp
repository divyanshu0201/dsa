class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int max1=INT_MIN,max2=INT_MIN;
        string temp;
        for(auto x:mp){
            if(max1<x.second){
                max1=x.second;
            }
        }
        for(auto x:mp){
            if(max2<x.second&&x.second<max1){
                max2=x.second;
                temp=x.first;
            }
        }
        return temp;
    }
};
