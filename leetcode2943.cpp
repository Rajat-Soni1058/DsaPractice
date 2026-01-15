#include<bits/stdc++.h>
using namespace std;
class Solution {
public:    
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        vector<int> maxh;
        vector<int> maxv;
        int hbarlen=hBars.size();
        int vbarlen=vBars.size();
        maxh.push_back(2);
        sort(hBars.begin(),hBars.end());
        int c=2;
        for(int i=0;i<hbarlen-1;i++){
            if(hBars[i]==hBars[i+1]-1){
                c++;
            }
            else {
                if(c!=2)
                maxh.push_back(c);
                c=2;
            }

        }
        if(c!=2) maxh.push_back(c);
        ////////////
        maxv.push_back(2);
        sort(vBars.begin(),vBars.end());

         c=2;
        for(int i=0;i<vbarlen-1;i++){
            if(vBars[i]==vBars[i+1]-1){
                c++;
            }
            else {
                if(c!=2)
                maxv.push_back(c);
                c=2;
            }

        }
         if(c!=2) maxv.push_back(c);
        int maxinh=INT_MIN;
        for(int i=0;i<maxh.size();i++){
            maxinh=max(maxinh,maxh[i]);
        }
        /////
        int maxinv=INT_MIN;
        for(int i=0;i<maxv.size();i++){
            maxinv=max(maxinv,maxv[i]);
        }
        int mini=min(maxinv,maxinh);
        return mini*mini;

        
    }
};