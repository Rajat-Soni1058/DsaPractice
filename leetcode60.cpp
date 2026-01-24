#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void permutation(string &ans,string v,string s,int &k,int &count){
    if(count==k) return ;
    if(s.size()==0){
        count++;
        if(count==k){
            ans=v;
        }
        return ;
    }


    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string r=s.substr(0,i);
        string l=s.substr(i+1);
        permutation(ans,v+ch,r+l,k,count);

    }


}
    string getPermutation(int n, int k) {
        string s="";
        string ans="";
        int d;
        int fac=1;
        for(int i=1;i<n;i++){
            fac=fac*i;
        }
        if(k%fac==0){
            d=k/fac;
            k=fac;

        }
        else {
            d=k/fac+1;
            k=k%fac;
        }
        for(int i=1;i<=n;i++){
            if(i==d) continue;
            s=s+to_string(i);
        } 
        int count=0;
        permutation (ans,"",s,k,count);
        ans=to_string(d)+ans;
        return ans;
        
    }
};