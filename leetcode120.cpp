#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>> v(m,vector<int> (m,0));
        int j=0;
        v[0][0]=triangle[0][0];
        for(int i=1;i<m;i++){
            j++;
            for(int k=0;k<=j;k++){
                if(k==0){
                    v[i][k]=triangle[i][k]+v[i-1][k];
                }
                else if(k==j){
                     v[i][k]=triangle[i][k]+v[i-1][k-1];

                }
                else {
                     v[i][k]=triangle[i][k]+min(v[i-1][k],v[i-1][k-1]);
                }
            }
            
        }
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            ans=min(ans,v[m-1][i]);
        }
        return ans ;
        
    }
};