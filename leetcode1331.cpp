#include<bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>  s;
        vector<int> v;
        unordered_map<int,int> mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        int i=0;
        for(auto x:s){
            i++;
            mp[x]=i;
        }
        for(int i=0;i<n;i++){
            v.push_back(mp[arr[i]]);
        }
        return v;
    }
};
