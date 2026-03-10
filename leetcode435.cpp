#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
static bool cmp(vector<int> &i1, vector<int> &i2 ){
    return i2[1]>i1[1];
}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> v=intervals;
        sort(v.begin(),v.end(),cmp);
        int ans=0;
        int len=v[0][1];
        for(int i=1;i<n;i++){
            if(v[i][0]<len){
                ans++;
            }
            else {
                len=v[i][1];
            }
        }
        return ans;
        
    }
};