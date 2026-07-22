class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0;
        int p = 1;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                p*=nums[i];
            }
            else{
                zero++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if (zero>0 && nums[i]!=0){
                v.push_back(0);
            }
            else if (zero>1){
                return vector<int>(nums.size(),0);
            }
            else if (zero>0 && nums[i]==0){
                v.push_back(p);

            }
            
            else{
                v.push_back(p/nums[i]);
            }
        }
        return v;
    }
};