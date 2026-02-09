#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        int f=0;
       if (dividend == INT_MIN  && divisor == -1) return INT_MAX;
        if (dividend==INT_MAX && divisor == -1) return -1*INT_MAX;
        if((dividend>0&&divisor>0)||(dividend<0&&divisor<0)){
            f=1;
        }
        long long dd=abs(1LL*dividend); 
        long long dr=abs(1LL*divisor);
        if(dd<dr||dd==0) return 0;
        long long  limit=pow(2,31);
        long long sum=0;
        if(f==1){
             long long c=0;
            for(long long  i=1;i<=limit;i++){
                 
                 sum=sum+dr;
                if(sum>dd){
                    return (int)c;
                }
                c++;  
            }
            if(sum==dd) return (int)(c-1);
        }
        else {
            long long  c=0;
            long long limitneg=1ll*limit+1;
            for(long long  i=1;i<=limitneg;i++){
                sum=sum+dr;
                if(sum>dd){
                    return (int)(-1*c);
                }
                
                c++;


            }
            if(sum==dd) return int(-1*(c-1));
        }
        return 0;
        
    }
};