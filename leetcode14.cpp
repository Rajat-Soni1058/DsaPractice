#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n=strs.size();
       if(n==1) return strs[0];
       sort(strs.begin(),strs.end());
       string first = strs[0];
       string last=strs[n-1];
       string s="";
       for(int i=0;i<min(first.length(),last.length());i++){
        if(first[i]==last[i]) s=s+first[i];
        else break;
       } 
       return s;
    }
};