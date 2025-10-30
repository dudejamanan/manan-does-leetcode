class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> result(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            int j =(i+1)%nums.size();
            while(j!=i){
                if (nums[j]>nums[i]){
                result[i] = nums[j];
                break;
                }
                j = (j+1)%nums.size();
            }
        }
        return result;
    }
};