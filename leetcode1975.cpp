#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long  mini=LLONG_MAX;
        int count=0;
        int n=matrix.size();
        
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]<0) count++;
                if(mini>abs(matrix[i][j])) mini=abs(matrix[i][j]);
                sum=sum+abs(matrix[i][j]);
            }
        }
        if(count%2==0) return sum;
        else return sum-2*mini;
        
    }
};