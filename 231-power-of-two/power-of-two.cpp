class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool x = false;
        if(n>0 && (n&(n-1))==0){
            x = true;
        }
        return x;
    }
};