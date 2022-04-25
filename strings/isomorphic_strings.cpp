 { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        char a1[MAX_CHARS];
        char a2[MAX_CHARS];
        for(int i=0;i<MAX_CHARS;i++){
            a1[i]='0';
            a2[i]='0';
        }
        int i=0,j=0;
        int l1=str1.length();
        int l2=str2.length();
        if(l1!=l2){
            return 0;
        }
        while(i<l1 && j<l2){
            if(a1[str1[i]]=='0' && a2[str2[j]]=='0'){
                a1[str1[i]]=str2[j];
                a2[str2[j]]=str1[i];
            }
            else if(a1[str1[i]]=='0'){
                if(a2[str2[j]]!=str1[i]){
                    return 0;
                }
                a1[str1[i]]=str2[j];
            }
            else if(a2[str2[j]]=='0'){
                if(a1[str1[i]]!=str2[j]){
                    return 0;
                }
                a2[str2[j]]=str1[i];
            }
            else{
                if(a1[str1[i]]!=str2[j] || a2[str2[j]]!=str1[i]){
                    return 0;
                }
            }
            i++;
            j++;
        }
        return 1;
        
    }
};
