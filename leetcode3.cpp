#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int n=s.size();
        if(n==1) return 1;
        int maxi=0;
        int lastidx=0;
        int i;
        for( i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()&&mp[s[i]]>=lastidx){
                maxi=max(maxi,i-lastidx);
                lastidx=mp[s[i]]+1;
                mp[s[i]]=i;           
            }
            else {
               mp[s[i]]=i;
            }

        }
       if(lastidx<n) maxi=max(maxi,i-lastidx);
        return maxi;
        
    }
};