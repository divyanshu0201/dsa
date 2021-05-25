void printsubstring(string t,int i,int n,string s){
    if(i==n){
      cout<<t<<endl;
    }
    else{
      printsubstring(t,i+1,n,s);
      t=t+s[i];
      printsubstring(t,i+1,n,s);
    }
}

int main(){
  string s;
  cin>>s;
  printsubstring("",0,s.length(),s);
  return 0;
}
