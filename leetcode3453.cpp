#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
double checky(double midy,vector<vector<int>>& squares){
    double area=0;
    for(auto &p:squares){
     double  y=p[1];
     double l=p[2];
     if(midy>=y+l){
        area=area+l*l;
     }
     else if(midy>y){
        area=area+l*(midy-y);
     }  
    }
    return area;
}
    double separateSquares(vector<vector<int>>& squares) {
        double totalA=0;
        double   miny=INT_MAX;
        double  maxy=INT_MIN;
        int n=squares.size();
        for (int i=0;i<n;i++){
            miny=min((1.0)*squares[i][1],miny);
            maxy=max(maxy,(1.0)*(squares[i][1]+squares[i][2]));
            double l=squares[i][2];
            totalA=totalA+l*l;

        }
        double ans=0;
        while(maxy-miny>1e-5){
            double  midy=miny+(maxy-miny)/2;
            ans=midy;
            if(checky(midy,squares)>=totalA/2.0){
                maxy=midy;

            }
            else {
                miny=midy;
            }


        }
        return ans;

        
    }
};