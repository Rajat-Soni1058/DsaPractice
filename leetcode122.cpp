#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                maxprof=maxprof+(prices[i]-prices[i-1]);
            }
        }
        return maxprof;
        
    }
};