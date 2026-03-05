#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        string temp1="";
        string temp2="";
        for(int i=1;i<=n;i++){
            temp1=temp1+(i%2==0?"1":"0");
            temp2=temp2+(i%2==0?"0":"1");
        }
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(s[i]!=temp1[i]){
                count1++;
            }
            if(s[i]!=temp2[i]){
                count2++;
            }

        }
        return min(count1,count2);

        
    }
};