#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        if(num==0) return 1;
       string s="";
       while(num){
        int rem=num%2;
        if(rem==0) rem=1;
        else rem=0;
        string s1=to_string(rem);
        s=s1+s;
        num=num/2;
       }
       long long  k=1;
       int n=0;
       for(int i=s.size()-1;i>=0;i--){
        n=n+((int)s[i]-48)*k;
        k=k*2;
       }
       return n;
    }
};