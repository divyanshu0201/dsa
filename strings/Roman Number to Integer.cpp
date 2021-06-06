class Solution {
public:
    int romanToInt(string str) {
        int n=str.length();
    int t=0;
    for(int i=0;i<n;i++){
        if(str[i]=='I' && str[i+1] && str[i+1]=='V' ){
            t += 4;
            i++;
        }
        else if(str[i]=='I' && str[i+1] && str[i+1]=='X' ){
            t += 9;
            i++;
        }
        else if(str[i]=='X' && str[i+1] && str[i+1]=='L' ){
            t += 40;
            i++;
        }
        else if(str[i]=='X' && str[i+1] && str[i+1]=='C' ){
            t += 90;
            i++;
        }
        else if(str[i]=='C' && str[i+1] && str[i+1]=='D' ){
            t += 400;
            i++;
        }
        else if(str[i]=='C' && str[i+1] && str[i+1]=='M' ){
            t += 900;
            i++;
        }
        else if(str[i]=='I' ){
            t += 1;
        }
        else if(str[i]=='V'){
            t+=5;
        }
        else if(str[i]=='X'){
            t+=10;
        }
        else if(str[i]=='L'){
            t+=50;
        }
        else if(str[i]=='C'){
            t+=100;
        }
        else if(str[i]=='D'){
            t+=500;
        }
        else if(str[i]=='M'){
            t+=1000;
        }
    }
    return t;
    }
};
