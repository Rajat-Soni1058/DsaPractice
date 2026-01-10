#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> v;
        if(n==1){
            if(digits[n-1]==9){
                return {1,0};
            }
            else {
                digits[n-1]+=1;
                return digits;
            }
        }
        int s;
        digits[n-1]+=1;
     s=digits[n-1]/10;
     digits[n-1]%=10;
     v.push_back(digits[n-1]);
     for(int i=n-2;i>=0;i--){
         digits[i]+=s;
     s=digits[i]/10;
     digits[i]%=10;
     v.push_back(digits[i]);
     }
     if(s==1){
        v.push_back(1);
     }
     reverse(v.begin(),v.end());
     return v;
    }
};