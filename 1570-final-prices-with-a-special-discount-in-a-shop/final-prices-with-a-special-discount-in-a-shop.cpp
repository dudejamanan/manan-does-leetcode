class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> x;
        for(int i=0;i<prices.size();i++){
            bool y = false;
            for(int j=i+1;j<prices.size();j++){
                if (prices[j]<=prices[i]){
                    x.push_back(prices[i]-prices[j]);
                    y = true;
                    break;
                }
            }
            if(y==false){
            x.push_back(prices[i]);
    
            }
        }
        return x;
    }
};