#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int a,b;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]<0){
                a=abs(nums[i]);
                continue;
                

            }
            nums[abs(nums[i])-1]=-1*nums[abs(nums[i])-1];
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                b=i+1;
                break;
            }
        }
        return {a,b};
            

        }
        
    
    
};