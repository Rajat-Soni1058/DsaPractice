#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
      
        int f=0;
        int count=0;
        while(1){
             vector<int> v=nums;
            int n=nums.size();
            sort(v.begin(),v.end());
            if(v==nums){
                break;
            }

            int sum=0;
            int mini=INT_MAX;
            int idx;
            for(int i=0;i<n-1;i++){
                sum=nums[i]+nums[i+1];
                if(sum<mini){
                    idx=i;
                    mini=sum; 
                }

            }
            nums[idx]=mini;
            nums.erase(nums.begin()+idx+1);
            count++;
            

        }
        return count;
        
    }
};