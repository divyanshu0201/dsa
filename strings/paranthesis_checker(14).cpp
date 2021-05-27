class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int n=x.length();
        char stack[n];
        int i,j;
        int top=-1;
        for(i=0;i<n;i++){
            if(top==-1){
                top++;
                stack[top]=x[i];
            }
            else if(x[i]==')' && stack[top]=='('){
                top--;
            }
            else if(x[i]==']' && stack[top]=='['){
                top--;
            }
            else if(x[i]=='}' && stack[top]=='{'){
                top--;
            }
            else{
                top++;
                stack[top]=x[i];
            }
        }
        if(top==-1){
            return true;
        }
        else
            return false;
    }

};
