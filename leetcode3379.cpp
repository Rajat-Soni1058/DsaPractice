#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> r(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                int idx=(i+nums[i])%n;
                r[i]=nums[idx];
            }
            else if(nums[i]<0){
                int idx=((i-abs(nums[i]))%n+n)%n;
                r[i]=nums[idx];
            }
            else {
                r[i]=nums[i];
            }
            
        }
        return r;
        
    }
};