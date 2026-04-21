#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans ="";
        int flag =0;
        int idx =0;
        int n =s.size();
        int size = n;
        while (size) {
            for (int i =0;i<n;i++) {
                if (indices[i] == idx) {
                    ans =ans+ s[i];
                    break;
                }
            }
            idx++;
            size--;
        }
        return ans;
    }
};