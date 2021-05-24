class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        else{
            string str;
            string temp = "";
            str = countAndSay(n-1);
            int l=str.length();
            int i,j;
            char k='1';
            j=0;
            for(i=0;i<l-1;i++){
                if(str[i]==str[i+1]){
                    k++;
                }
                else{
                    temp = temp + k;
                    temp = temp + str[i];
                    k='1';
                }
            }
            temp=temp+k;
            temp=temp+str[l-1];
            return temp;
        }
    }
};
