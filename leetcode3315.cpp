#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n,-1);
        for(int i=0;i<n;i++){
            if(nums[i]==2) continue;
            for(int j=0;j<32;j++){
                if((nums[i]&(1<<j))>0) continue;
                {
                    int ans=nums[i]^(1<<j-1);
                  a[i]=ans;
                  break;

            }

        }
        }
        return a;
        
    }
};