class Solution {
public:
    int mirrorDistance(int n) {
        int reverse = 0;
        int nn = n;
        while(n){
            int d = n%10;
            reverse = reverse*10+d;
            n/=10;
        }
        return abs(nn-reverse);
    }
};