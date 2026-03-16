#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void f(string s ,int n,int l, int r, vector<string> &v){
    if(s.length()==2*n){
        v.push_back(s);
        return;
    }
    
    if(l<n) f(s+'(',n,l+1,r,v);
    if(s!=""&&l>r) f(s+')',n,l,r+1,v);
    
}
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        f("",n,0,0,v);
        return v;
        
    }
};