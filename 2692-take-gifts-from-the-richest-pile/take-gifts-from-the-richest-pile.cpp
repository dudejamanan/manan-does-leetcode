class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        while(k>0){
            int maxi = *max_element(gifts.begin(),gifts.end());
            for(int i=0;i<gifts.size();i++){
                if (gifts[i]==maxi){
                    gifts[i]=floor(pow(gifts[i],0.5));
                    break;
                }
            }
            k--;
        }
        long long sum=0;
        for(int i=0;i<gifts.size();i++){
            sum+=gifts[i];
        }
        return sum;

    }
};