#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> s;
        for(int i=0;i<9;i++){
            s.clear();
            for(int j=0;j<9;j++){
                if(s.find(board[i][j])!=s.end()){
                    return false;
                }
                if(board[i][j]!='.')s.insert(board[i][j]);

            }
        }
          s.clear();
        for(int j=0;j<9;j++){
            s.clear();
            for(int i=0;i<9;i++){
                if(s.find(board[i][j])!=s.end()){
                    return false;
                }
               if(board[i][j]!='.') s.insert(board[i][j]);

            }
        }
          s.clear();
        int count=0;
        int k=0;
        while(count!=3){
            for(int i=0;i<9;i++){
                if(i==0||(i)%3==0){
                    s.clear();
                }
                for(int j=k;j<k+3;j++){
                    if(s.find(board[i][j])!=s.end()){
                        return false;
                    }
                    if(board[i][j]!='.') s.insert(board[i][j]);
                }
            }
            count++;
            k=k+3;
        }
        return true;
        
    }
};