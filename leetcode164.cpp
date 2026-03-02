#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int diff=INT_MIN;
        int n=nums.size();
        if(n<2) {
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if((nums[i]-nums[i-1])>diff){
                diff=nums[i]-nums[i-1];
            }
        }
        return diff;
        
        
    }
};