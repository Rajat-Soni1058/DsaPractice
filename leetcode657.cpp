#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0,r=0,d=0,u=0;
        int n=moves.size();
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                if(r==0){
                    l++;
                }
                else{
                    r--;
                }
            }
            if(moves[i]=='R'){
                if(l==0){
                    r++;
                }
                else{
                    l--;
                }
            }
            if(moves[i]=='U'){
                if(d==0){
                    u++;
                }
                else{
                    d--;
                }
            }
            if(moves[i]=='D'){
                if(u==0){
                    d++;
                }
                else{
                    u--;
                }
            }
        }
      if((d==0)&&(l==0)&&(r==0)&&(u==0)){
        return true;
      }
      else return false;
        
    }
};