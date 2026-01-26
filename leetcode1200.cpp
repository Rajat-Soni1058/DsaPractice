#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> v;
        int mini=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            mini=min(mini,abs(arr[i]-arr[i+1]));

        }
        for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])==mini){
                v.push_back({arr[i],arr[i+1]});
            }
        }
        return v;    
    }
};