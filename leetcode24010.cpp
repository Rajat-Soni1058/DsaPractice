#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n=players.size();
        int m=trainers.size();
        int j=n-1;
        int count=0;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        if(players[0]>trainers[m-1]) return 0;
        for(int i=m-1;i>=0;i--){
            while(j>=0){
                if(players[j]<=trainers[i]){
                    count++;
                    j--;
                    break;
                }
                j--;
            }

        }
        return count;
        
    }
};