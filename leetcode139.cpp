#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
void f(string &s,vector<string>& wordDict,bool &ans,int idx,unordered_set<string> &set,int &k,vector<int>&dp){
    if(ans==true) return;
    if(k==idx){
        ans=true;
    } 
    if(dp[idx]==2) return;
    string temp="";
    for(int i=idx;i<k;i++){
        temp=temp+s[i];
        if(set.find(temp)!=set.end()){
        f(s,wordDict,ans,i+1,set,k,dp);
        }
        if(ans==true) break;   
    }
    if(ans==false) dp[idx]=2;
    return;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> set;
        vector<int> dp(305,-1);
        int n=wordDict.size();
           int k=s.size();
        for(int i=0;i<n;i++){
            set.insert(wordDict[i]);
        }
        bool ans=false;
        f(s,wordDict,ans,0,set,k,dp);
        return ans;
        
    }
};