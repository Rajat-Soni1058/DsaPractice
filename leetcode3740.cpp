#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<=n-3;i++){
            int j=i+1;
            int k=n-1;
            while(j<n&&(nums[i]!=nums[j])) j++;
            while(j<n){
            while(j<k){
                if(nums[j]==nums[k]){
                    mini=min(mini,abs(i-j)+abs(j-k)+abs(k-i));
                    
                }
                k--; 
            }
            j++;
            while(j<n&&(nums[j]!=nums[i])) j++;
            }
            }
         if(mini==INT_MAX) return -1;
        return mini;
        
    }
};