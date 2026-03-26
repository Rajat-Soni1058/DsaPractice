#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long k=n;
if(n<0){
    x=1/x;
    k=-1*k;
}
   while(k>0){
    if(k%2==1){
        ans=ans*x;
    }
    x=x*x;
    k=k/2;
   }
   return ans;
    }
};