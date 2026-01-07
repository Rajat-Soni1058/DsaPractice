#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return false;
        int l=0;
        int r=n-1;
        int f=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]) f=1;
            if(f&&arr[i]<=arr[i+1]) return false;
            if(!f&&(arr[i]>=arr[i+1])){
                return false;
            }
        }
        if(arr[0]>arr[1]||f==0)  return false;
        
        return true;
       
    }
};