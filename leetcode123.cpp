#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==1) return 0;
        vector<int>ztoi(n,0);
  int maxi=0;
  int leftmini=prices[0];
        for(int i=1;i<n;i++){
            maxi=max(maxi,prices[i]-leftmini);
             ztoi[i]=maxi;
            leftmini=min(leftmini,prices[i]);
        }
        vector<int>iton(n,0);
        int maxi2=0;
        int rightmax=prices[n-1];
        for(int i=n-2;i>=0;i--){  
            maxi2=max(maxi2,rightmax-prices[i]);
            iton[i]=maxi2;
            rightmax=max(rightmax,prices[i]);
        }
        int maxans=0;
        for(int i=0;i<n-1;i++){
            maxans=max(maxans,ztoi[i]+iton[i+1]);
        }
        maxans=max(maxans,ztoi[n-1]);
        return maxans;



            
    }
};