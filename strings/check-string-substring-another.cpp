class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp;
        temp="";
        temp = temp+s;
        temp= temp + s;
        
        int n=temp.length();
        int n1=goal.length();
        int n2=s.length();
        
        if(n1==0 && n2==0){
            return true;
        }
        
        if(n1!=n2){
            return false;
        }
        
        
        for(int i=0;i<n;i++){
            if(temp[i]==goal[0]){
                    int k=1;
                for(int j=i+1;j<i+n1;j++){
                    if(temp[j]!=goal[k]){
                        break;
                    }
                    k++;
                }
                if(k==n1){
                    return true;
                }
            }
        }
        return false;
    }
};
