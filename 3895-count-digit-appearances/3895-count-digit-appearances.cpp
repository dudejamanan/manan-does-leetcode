class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            vector<int> digits;
            while(nums[i]){
                int a = nums[i]%10;
                digits.push_back(a);
                nums[i]/=10;
            }
            for(int j=0;j<digits.size();j++){
                if (digits[j]==digit){
                    count++;
                }
            }
        }
        return count;
    }
};