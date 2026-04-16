#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int> v=heights;
        sort(heights.begin(),heights.end());
        int n=heights.size();
        for(int i=0;i<n;i++){
            if(v[i]!=heights[i]) count++;
        }
        return count;    
    }
};