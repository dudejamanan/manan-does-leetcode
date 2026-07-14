class Solution {
public:
    int tribonacci(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        if (n==2) return 1;
        long long ft = 0;
        long long st = 1;
        long long tt = 1;
        for(int i=0;i<n;i++){
            long long frt = ft+st+tt;
            ft = st;
            st = tt;
            tt = frt;
        }
        return ft;
    }
};