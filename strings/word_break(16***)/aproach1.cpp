bool ispresent(string t,vector<string> &B){
    int n=B.size();
    int i;
    for(i=0;i<n;i++){
        string temp=B[i];
        if(t.compare(temp)==0){
            return true;
        }
    }
    return false;
}


int wordBreak(string A, vector<string> &B) {
    int i;
    int n=A.length();
    if(n==0){
        return 1;
    }
    for(i=1;i<=n;i++){
        if(ispresent(A.substr(0,i),B)==true&&wordBreak(A.substr(i,n-i),B)==1){
            return 1;
        }
    }
    return 0;
}
