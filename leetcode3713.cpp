#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                int same=mp[s[j]];
                int f=0;
                for(auto x:mp){
                    if(x.second!=same){
                        f=1;
                        break;
                    }
                }
                if(f==0){
                    maxi=max(maxi,j-i+1);
                }
            }
        }
        return maxi;
        
    }
};