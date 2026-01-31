#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        char ch=target;
        for(int i=0;i<n;i++){
            if(target<letters[i]){
target=letters[i];
break;

            }
        }
        if(ch==target) return letters[0];
        else return target;

        
    }
};