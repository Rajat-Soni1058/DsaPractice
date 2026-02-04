#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> grayCode(int n) {
        int lastint=pow(2,n)-1;
        vector<int> v(lastint+1);
        for(int i=0;i<=lastint;i++){
            v[i]=i^(i/2);//imp hai -->Gray(i)=i ⊕ (i/2)===Gray(i)=i^(i>>1)
        }
        return v;
        
    }
};