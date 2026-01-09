#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long  s=1;
        long long  c=1;
        int n=prices.size();
        for(int i=1;i<prices.size();i++){
            if(prices[i]+1==prices[i-1]){
                c++;
                s=s+c;
            }
            else{
                c=1;
                s=s+c;
            }
        }
        return s;    
    }
};