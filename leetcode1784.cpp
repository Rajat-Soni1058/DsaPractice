#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        if(n==1&&s[0]=='1') return true;
        vector<char> ch;
        ch.push_back(s[0]);
        for(int i=1;i<n;i++){
           if(ch[ch.size()-1]!=s[i]){
            ch.push_back(s[i]);
           }
        }
        int count=0;
        n=ch.size();
        for(int i=0;i<n;i++){
            if(ch[i]=='1') count++;
        }
        if(count==1) return true;
       else  return false;
        
    }
};