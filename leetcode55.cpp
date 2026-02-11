#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<bool> v(n,false);
        v[n-1]=true;  
        for(int i=n-2;i>=0;i--){
            if(nums[i]==0) v[i]=false;
            for(int j=i+1;j<=min(nums[i]+i,n-1);j++){
                v[i]=v[j];
                if(v[i]==true) break;

            }
        }
        return v[0];
    }
};