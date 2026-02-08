#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int f(int x){
    int n=0;
    if(x<0){
        n=1;

        
    }
    long long l=0;
    while(x){
        int rem=abs(x%10);
        l=(l*10+rem);
        x=x/10;

    }
    int a=pow(2,31)-1;
    int b=-1*pow(2,31);
    if(n==1){
        l=-1*l;
        if(l<b){
            return 0;
        }
        else {
            return (int)l;
        }
    }
    else {
        if(l>a) return 0;
        else return (int)l;
    }
}
    int reverse(int x) {
        return f(x);
        
        
    }
};