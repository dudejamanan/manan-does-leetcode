class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>()); // sort in descending
        return (nums[0]-1)*(nums[1]-1);
    }
};