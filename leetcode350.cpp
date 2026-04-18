
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
        map<int,int> mp1;
        map<int,int> mp2;
        vector<int> v;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            mp1[nums1[i]]++;
        }
        n=nums2.size();
        for(int i=0;i<n;i++){
            mp2[nums2[i]]++;
        }
        for(auto x:mp1){
            if(mp2.find(x.first)!=mp2.end()){
                int count=min(mp1[x.first],mp2[x.first]);
               while(count){
                v.push_back(x.first);
                count--;
               }
            }
        }
        return v;

        
    }
};