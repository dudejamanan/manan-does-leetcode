class Solution {
public:
    int digitFrequencyScore(int n) {
        long long sum =0;
        vector<int> freq(10,0);
        while(n){
            int a = n%10;
            freq[a]++;
            n/=10;
        }
        for(int i=0;i<freq.size();i++){
            sum+=(i*freq[i]);
        }
        return sum;
    }
};