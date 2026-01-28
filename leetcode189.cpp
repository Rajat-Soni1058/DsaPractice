#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n= nums.size();
        k=k%n;
        int i = 0;
        int j= n-k-1;
       while(i<j){
               swap(nums[i],nums[j]);
               i++;
               j--;
       }
     int y = n-k;
        int l= n-1;
       while(y<l){
               swap(nums[y],nums[l]);
               y++;
               l--;
               }
               int p=0;
               int q=n-1;
               while(p<=q){
                swap(nums[p],nums[q]);
                p++;
                q--;
               }
               for (int g=0;g<n;g++){
                cout<<nums[g]<<" ";
               }
    }
};