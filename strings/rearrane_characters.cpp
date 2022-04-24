#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string temp;
	vector<string> s;
	for(int i=0;i<t;i++){
	    cin>>temp;
	    s.push_back(temp);
	}
	int arr[t]={0};
	for(int i=0;i<t;i++){
	    unordered_map<char, int> mp;
	    temp=s[i];
	    int c=0;
	    for(int j=0;j<s[i].length();j++){
	        if(mp.find(temp[j])==mp.end()){
	            c++;
	        }
	        mp[temp[j]]++;
	    }
	    int max=0;
	    for(auto it : mp){
	        if(it.second>max){
	            max=it.second;
	        }
	    }
	    if(max<=((s[i].length()+1)/2)){
	        arr[i]=1;
	    }
	}
	for(int i=0;i<t;i++){
	    cout<<arr[i]<<"\n";
	}
	return 0;
}
