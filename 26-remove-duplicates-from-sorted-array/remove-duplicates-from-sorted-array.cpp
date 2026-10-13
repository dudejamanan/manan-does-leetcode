class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set <int> s(nums.begin(),nums.end());
        vector<int> n(s.begin(),s.end());
        nums = n;
        //reverse(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=s[i];
        // }
        return s.size();
    }
};