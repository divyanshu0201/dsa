int countRev (string s)
{
    int n=s.length();
    int i;
    int k1=0,k2=0,c=0;
    for(i=0;i<n;i++){
        if(s[i]=='{'){
            k1++;
        }
        else{
            k2++;
            if(k2>k1){
                c++;
                k2--;
                k1++;
            }
            else{
                k1--;
                k2--;
            }
        }    
    }
    if((k1+k2)%2!=0){
        return -1;
    }
    if(k1==k2){
        return c;
    }
    else{
        if(k2>k1){
            return (c+(k2-k1)/2);
        }
        else{
            return (c+(k1-k2)/2);
        }
    }
}
