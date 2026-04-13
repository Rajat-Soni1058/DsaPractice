#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
bool  possible(vector<string>&v,int r,int i,int n){
    for(int k=0;k<=r;k++){
        if(v[k][i]=='Q') return false;
    }
    for(int k=r,l=i;l>=0&&k>=0;l--,k--){
        if(v[k][l]=='Q') return false;
    }
    for(int k=r,l=i;k>=0&&l<n;l++,k--){
        if(v[k][l]=='Q') return false;
    }
    return true;
}
void f(vector<vector<string>> &ans,vector<string> &v,int r,int &n){
    if(r>=n) {
        ans.push_back(v);
        return;
    }
    for(int i=0;i<n;i++){
        if(possible(v,r,i,n)){
            v[r][i]='Q';
            f(ans,v,r+1,n);
            v[r][i]='.';
        }
    }
    return;
}
    vector<vector<string>> solveNQueens(int n) {
        string s="";
        for(int i=0;i<n;i++){
            s=s+".";
        }
        vector<string> v(n,s);
        vector<vector<string >> ans;
        f(ans,v,0,n);
        return ans;
    }
};