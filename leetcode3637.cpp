#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        while(i<n&&nums[i-1]<nums[i]){
            i++;
        }
        int p=i-1;
        while(i<n&&nums[i-1]>nums[i]) {
            i++;
        }
        int q=i-1;
        while(i<n&& nums[i-1] < nums[i]) {
            i++;
        }
        int f=i-1;
        if((p!=0) &&(q!=p)&&(f==n-1&&f!=q))
        return true;
        else return false;
    }
};