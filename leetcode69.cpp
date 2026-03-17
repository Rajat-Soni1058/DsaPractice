#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
       if(x==0||x==1) return x;
       long long lo =1;
       long long  hi=x;
       int ans=0;
       while(lo<=hi){
        long long  mid=lo+(hi-lo)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
       } 
       return ans ;
    }
};