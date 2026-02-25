#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool fun(string s,string &s1,string &s2,string &cmp,int i,int j, vector<vector<int>> &dp){
    if(i==s1.size()){
        for(int k=j;k<s2.size();k++){
            s=s+s2[k]; 
        }
     
        if(s==cmp){
            return true;
            
        }
        return false;


    }
    if(j==s2.size()){
       
        for(int k=i;k<s1.size();k++){
            s=s+s1[k];
        }
        if(s==cmp){
           return true;
        }
         return false;
    }
    if(dp[i][j]!=-1)  return dp[i][j];
    bool result=false;
    if(s==""){
       result=result|| fun(s+s1[i],s1,s2,cmp,i+1,j,dp);
        result=result||fun(s+s2[j],s1,s2,cmp,i,j+1,dp);
        return dp[i][j]=result;
    }
  if(s!=""&&s1[i]==cmp[s.size()])
   result=result|| fun(s+s1[i],s1,s2,cmp,i+1,j,dp);
   if(s!=""&&s2[j]==cmp[s.size()])
   result=result|| fun(s+s2[j],s1,s2,cmp,i,j+1,dp);
    return dp[i][j]=result;
    
}
    bool isInterleave(string s1, string s2, string s3) {
     if(s1.size()+s2.size()!=s3.size()) return false;
     vector<vector<int>> dp(102,vector<int>(102,-1));
    bool ans= fun("",s1,s2,s3,0,0,dp);
     if(ans==false) return false;
     else return true;

        
    }
};