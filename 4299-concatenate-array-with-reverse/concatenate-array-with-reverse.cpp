class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> nums1 = nums;
        reverse(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            nums1.push_back(nums[i]);
        }
        return nums1;
    }
};