#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
       int count=0;
       int i=startIndex;
       while(count<=n){
        string s=words[(i)%n];
         if(s==target){
       break;

        }
        count++;
        i++;
       }
       if(count>n) return -1;
       i=startIndex;
      int  count2=0;
      int idx;
       while(count2<=n){

         string s=words[((i+n)%n+n)%n];
         if(s==target){
            count2;
            break;

        }
        count2++;
        i--;
       }
       if(count2>n) return -1;
       else return min(count,count2);
        
    }
};