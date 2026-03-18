#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
      int ans=0;
      int two=1;
      if(n==0) return 1;
        while(n){
            int temp=n&1;
            if(temp==1) temp=0;
            else temp=1;
                ans=ans+(temp)*two;
                two=two*2;
                n=n>>1;
        }
        return ans ;
        
    }
};