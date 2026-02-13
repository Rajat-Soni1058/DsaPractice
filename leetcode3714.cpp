#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int help(string s,char ch1,char ch2){
    int n=s.size();
    int maxi=INT_MIN;
    int countch1=0;
    int countch2=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        if(s[i]!=ch1&&s[i]!=ch2){
            mp.clear();
            countch1=0;
            countch2=0;

        }
        if(s[i]==ch1){
            countch1++;
        }
        if(s[i]==ch2){
            countch2++;
        }
         if(countch1 == countch2) {
                maxi = max(maxi, countch1+countch2);
                continue;
            }
       int diff = countch1 - countch2;
            if(mp.count(diff)) {
                maxi = max(maxi,i-mp[diff]);
            } else {
                mp[diff] = i;
            }

    }
    return maxi;

}
    int longestBalanced(string s) {
        int n=s.size();
        int counts=1;
        int maxi=INT_MIN;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                counts++;

            }
            else {
                maxi=max(maxi,counts);
                counts=1;
            }
        }
         maxi=max(maxi,counts);
        maxi=max(maxi,help(s,'a','b'));
         maxi=max(maxi,help(s,'a','c'));
          maxi=max(maxi,help(s,'c','b'));
          int countA=0;
          int countB=0;
          int countC=0;
           unordered_map<string, int> diffMap;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'a')
                countA++;
            if(s[i] == 'b')
                countB++;
            if(s[i] == 'c')
                countC++;

            if(countA == countB && countA == countC) {
                maxi= max(maxi, countA+countB+countC);
            }

            int diffAB = countA - countB;
            int diffAC = countA - countC;

            string key = to_string(diffAB) + "_" + to_string(diffAC); 

            if(diffMap.count(key)) {
                maxi = max(maxi, i - diffMap[key]);
            } else {
                diffMap[key] = i;
            }
        }
        return maxi;
        
    }
};