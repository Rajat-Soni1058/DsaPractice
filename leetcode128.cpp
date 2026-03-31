#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_set<int> s;
     int n=nums.size();
     if(n==0) return 0;
     for(int i=0;i<n;i++){
      s.insert(nums[i]);
     }
     int maxcount=0;
     for(auto x:s){
       if(s.find(x-1)==s.end()){
        int count=1;
        while(s.find(x+1)!=s.end()){
            count++;
            x++;
        }
        maxcount=max(maxcount,count);
       }
     }
     return maxcount;
        
    }
};