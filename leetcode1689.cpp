#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPartitions(string n) {
        char maxi=n[0];
        for (auto x :n){
            if(x>maxi){
                maxi=x;
            }
        }
        int ans=(int)maxi-48;
        return ans;
        
    }
};