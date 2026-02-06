#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> s=nums;
        sort(s.begin(),s.end());
        int count=INT_MAX;
        for(int i=0;i<n;i++){
            long long  temp=1ll*s[i]*k;
            auto it=upper_bound(s.begin(),s.end(),temp);
            int total;
            if(it==s.end()){
                total=i;

            }
            else {
                total=(n)-(it-s.begin())+i;
            }
            count=min(count,total);

        }
        return count;
        
    }
};