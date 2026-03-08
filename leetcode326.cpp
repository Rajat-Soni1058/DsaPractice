#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false ;
        if(n==1) return true;
int i=1;
int s;
        while(1){
            if(pow(3,i)>=n){
                s=i;
break;
            }
            i++;
        }
        if(pow(3,s)==n) return true;
        else return false;
    }
};