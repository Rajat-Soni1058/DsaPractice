class Solution {
public:
    bool hasAlternatingBits(int n) {
        int temp=2;
        int f=0;
        while(n){
            int rem=n%2;
            if(f&&(temp==rem)){
                return false;
            }
            temp=rem;
            n=n/2;
            f=1;
        }
        return true;
        
    }
};