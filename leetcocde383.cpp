#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m1;
         unordered_map<char,int> m2;
         int n=magazine.size();
         for(int i=0;i<n;i++){
            m1[magazine[i]]++;
         }
         n=ransomNote.size();
          for(int i=0;i<n;i++){
            m2[ransomNote[i]]++;
         }

         for(int i=0;i<n;i++){
            if(m1.find(ransomNote[i])!=m1.end()){
                if(m2[ransomNote[i]]<=m1[ransomNote[i]]);
                else return false;
            }
            else return false;

         }
         return true;
    }
};