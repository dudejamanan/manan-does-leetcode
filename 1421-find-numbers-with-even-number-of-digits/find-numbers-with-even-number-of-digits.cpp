class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector <int> result;
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            int count =0;
            while(x>0){
                int t = x%10;
                x/=10;
                count++;
            }
            if (count%2==0){

                result.push_back(count);
            }
        }
        return result.size();
    }
};