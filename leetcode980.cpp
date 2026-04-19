#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
// must check the previous submission which is accepted , to see what change i made in  this 
 void f(vector<vector<int>>& grid,int &count,int& m,int &n,int i,int j,int &lsti,int &lstj,int countg,int &countobs){
    if(i>=m||j>=n||grid[i][j]==-1||grid[i][j]==10) return;
    if((i==lsti)&&(j==lstj)&&(countg==(m*n-countobs-1))){
        count++;
        return;
    } 
    int temp=grid[i][j];
    if(i>0){
        grid[i][j]=10;
        f(grid,count,m,n,i-1,j,lsti,lstj,countg+1,countobs);
        grid[i][j]=temp;

    }
    if(j>0){
        grid[i][j]=10;
        f(grid,count,m,n,i,j-1,lsti,lstj,countg+1,countobs);
        grid[i][j]=temp;
    }
    if(i<m-1){
        grid[i][j]=10;
        f(grid,count,m,n,i+1,j,lsti,lstj,countg+1,countobs);
        grid[i][j]=temp;
    }
    if(j<n-1){
        grid[i][j]=10;
        f(grid,count,m,n,i,j+1,lsti,lstj,countg+1,countobs);
        grid[i][j]=temp;
    }

   return;
 }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int sti;
        int stj;
        int lsti;
        int lstj;
        int count=0;
        int countobs=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2) {
                    lsti=i;
                    lstj=j;
                }
               else  if(grid[i][j]==1) {
                    sti=i;
                    stj=j;
                }
                else if(grid[i][j]==-1) {
                    countobs++;
                }
            }
        }
        f(grid,count,m,n,sti,stj,lsti,lstj,0,countobs);
        return count;
        
    }
};