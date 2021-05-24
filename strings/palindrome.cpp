int isPlaindrome(char S[])
{
    int i;
    int n=0;
    for(i=0;S[i]!='\0';i++){
        n++;
    }
        for(i=0;i<n/2;i++){
            if(S[i]!=S[n-1-i]){
                return 0;
            }
        }
    return 1;
}
