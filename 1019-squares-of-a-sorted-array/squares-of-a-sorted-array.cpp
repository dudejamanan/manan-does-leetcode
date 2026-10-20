class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l =0;
        int r = nums.size()-1;
        vector<int> result(r+1);
        int k = nums.size()-1;
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                result[k] = nums[l]*nums[l];
                l++;
                k--;

            }
            else{
                result[k] = nums[r]*nums[r];
                r--;
                k--;
            }
            
            
        }
        return result;
    }
};