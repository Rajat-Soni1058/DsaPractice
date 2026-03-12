#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n=s.size();
        vector<vector<int>> ans;
          int count=1;
          vector<int> v;
            v.push_back(0);
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else {
                if(count>=3){
                    v.push_back(i-1);
                    ans.push_back(v);  
                }
                count=1;
                v.clear();
                v.push_back(i);
            }
        }
        if(count>=3){
            v.push_back(n-1);
            ans.push_back(v);
        }
        return ans;
    }
};