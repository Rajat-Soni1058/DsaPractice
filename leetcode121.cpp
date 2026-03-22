#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> v(n,0);
        if(n==1) return 0;
        v[n-2]=prices[n-1];
        for(int i=n-3;i>=0;i--){
            v[i]=max(v[i+1],prices[i+1]);
        }
        int maxi=INT_MIN;
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,v[i]-prices[i]);
        }
        if(maxi<0) return 0;
        else return maxi;
        
    }
};