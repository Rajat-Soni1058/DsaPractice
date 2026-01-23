#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
           if(nums[i]!=val) count++;
           else nums[i]=INT_MAX; 
        }
        sort(nums.begin(),nums.end());
        return count;
    }
};