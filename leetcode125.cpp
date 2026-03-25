#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string ss="";
        for(int i=0;i<n;i++){
            if(s[i]>=65&&s[i]<=90){
                ss.push_back((char)(s[i]+32));
            }
            else if(s[i]>=97&&s[i]<=122){
                ss.push_back(s[i]);
            }
            else if(s[i]>=48&&s[i]<=57){
                ss.push_back(s[i]);
            }
        }
        string temp=ss;
        reverse(temp.begin(),temp.end());
        if(temp!=ss) return false;
        else return true ;
        
    }
};