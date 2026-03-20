#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> s1;
        unordered_set<int> s2;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    s1.insert(i);
                    s2.insert(j);
                
                }
            }
        }
        for(auto x:s1){
            for(int j=0;j<n;j++){
                matrix[x][j]=0;
            }
        }
        for (auto x:s2){
            for(int i=0;i<m;i++){
                matrix[i][x]=0;
            }
        }
        return ;
        
    }
};