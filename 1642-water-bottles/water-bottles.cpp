class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty = 0;
        int filled = numBottles;
        int drunk = 0;
        while(filled > 0 || empty >= numExchange){
            // if (filled>0){
                drunk+=filled;
                empty+=filled;
                filled = 0;
            // }
            filled = empty/numExchange;
            empty = empty%numExchange;
        }
        return drunk;
    }
};