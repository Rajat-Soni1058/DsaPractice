#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
int p(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
void f(vector<vector<string>>&ans,int &n,int idx,string &s,vector<string> v){
    if(idx==n){
        ans.push_back(v);
        return;

    }
    for(int i=idx;i<n;i++){
        if(p(s,idx,i)){
            v.push_back(s.substr(idx,i-idx+1));
            f(ans,n,i+1,s,v);
            v.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        
        vector<string> v;
        int n=s.size();
        f(ans,n,0,s,v);
        return ans;
        
    }
};