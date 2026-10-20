class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        while(fast<nums.size()){
            if(nums[fast]!=0 && nums[slow]==0){
                swap(nums[fast],nums[slow]);
                slow++;
                fast++;
            }
            else if(nums[fast]!=0 && nums[slow]!=0){
                slow++;
                fast++;
            }
            else{
                fast++;
            }
        }
    }
};