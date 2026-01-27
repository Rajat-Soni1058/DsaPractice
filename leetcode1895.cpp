#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>row(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                row[i][j]=grid[i][j]+(j>0?row[i][j-1]:0);
            }
        }
         vector<vector<int>>col(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                col[i][j]=grid[i][j]+(i>0?col[i-1][j]:0);
            }
        }
        
        for(int side=min(m,n);side>0;side--){
            for(int i=0;i+side-1<m;i++){
                for(int j=0;j+side-1<n;j++){
                    int rowsum=row[i][j+side-1]-(j>0?row[i][j-1]:0);
                    int fr=0;
                    for(int k=i+1;k<i+side;k++){
                        int sqrow=row[k][j+side-1]-(j>0?row[k][j-1]:0);
                        if(sqrow!=rowsum){
                            fr=1;
                            break;
                        }


                    }
                    if(fr==1){
                        continue;
                    }
                    int fc=0;
                    for(int k=j;k<j+side;k++){
                        int sqcol=col[i+side-1][k]-(i>0?col[i-1][k]:0);
                        if(sqcol!=rowsum){
                            fc=1;
                            break;

                        }
                    }
                    if(fc==1) break;
                    int ds=0;
                    int ods=0;
                    for(int k=0;k<side;k++){
                        ds=ds+grid[i+k][j+k];
                        ods=ods+grid[i+k][j+side-1-k];

                    }
                    if((ds==rowsum)&&(ods==rowsum)){
                        return side;

                    }

                }
            }

        }
        return 1;
        
    }
};