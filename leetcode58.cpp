#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0;
        stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word) {
        v.push_back(word);
        
    }
    return v[v.size()-1].size();
        
    }
};