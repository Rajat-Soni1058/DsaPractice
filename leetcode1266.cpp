#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n =points.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
            int dx=abs(points[i][0]-points[i+1][0]);
            int dy=abs(points[i][1]-points[i+1][1]);
            if(min(dx,dy)==dy){
                sum=sum+abs(abs(points[i][0]-points[i+1][0])-dy)+dy;

            }
            else {
                sum=sum+abs(abs(points[i][1]-points[i+1][1])-dx)+dx;
            }
        }
        return sum;

        
    }
};