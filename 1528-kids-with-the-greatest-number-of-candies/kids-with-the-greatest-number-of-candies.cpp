class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> yo;
        for(int i=0;i<candies.size();i++){
            if (candies[i]+extraCandies>=*max_element(candies.begin(),candies.end())){
                yo.push_back(true);
            }
            else{
                yo.push_back(false);
            }
        }
        return yo;
    }
};